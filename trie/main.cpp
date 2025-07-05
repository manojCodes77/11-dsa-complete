#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class TrieNode
{
public:
    TrieNode *child[26];
    bool isEndofWord;

    TrieNode()
    {
        isEndofWord = false;
        for (int i = 0; i < 26; i++)
        {
            child[i] = nullptr;
        }
    }
};
class Trie
{
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }
    // insertion
    void insert(string word)
    {
        TrieNode *node = root;
        for (auto c : word)
        {
            int index = c - 'a';
            if (node->child[index] == NULL)
            {
                node->child[index] = new TrieNode();
            }
            node = node->child[index];
        }
        node->isEndofWord = true;
        cout << "jai shree ram" << endl;
        return;
    }
    bool search(string word)
    {
        TrieNode *node = root;
        for (auto c : word)
        {
            int index = c - 'a';
            if (node->child[index] == nullptr)
            {
                return 0;
            }
            node = node->child[index];
        }
        return node->isEndofWord;
    }
    bool Delete(TrieNode *node, string word, int depth)
    {
        // Base condition
        if (depth == word.size())
        {
            // If it is not the end of the word
            if (!node->isEndofWord)
            {
                return false;
            }
            // If it is the end of the word, unmark it
            node->isEndofWord = false;

            // If the node has no children, then it can be deleted
            for (int i = 0; i < 26; i++)
            {
                if (node->child[i] != nullptr)
                {
                    return false;
                }
            }
            return true;
        }

        int index = word[depth] - 'a';
        // Character not present in the trie
        if (node->child[index] == nullptr)
        {
            return false;
        }

        // Recursive call to delete the character in the trie
        bool shouldDeleteCurrentNode = Delete(node->child[index], word, depth + 1);

        // If true is returned, delete the mapping of the character and node
        if (shouldDeleteCurrentNode)
        {
            delete node->child[index];
            node->child[index] = nullptr;

            // Check if the current node is now a leaf and not the end of any other word
            return !node->isEndofWord && std::all_of(begin(node->child), end(node->child), [](TrieNode *child)
                                                     { return child == nullptr; });
        }

        return false;
    }

    void DeleteWord(string word)
    {
        Delete(root, word, 0);
        return;
    }
};
int main()
{
    Trie *tree = new Trie();
    tree->insert("apple");
    tree->insert("applen");
    tree->insert("almond");
    tree->insert("appex");
    cout << tree->search("apple") << endl;
    cout << tree->search("applen") << endl;
    tree->DeleteWord("applen");
    cout << tree->search("applen") << endl;
    cout << tree->search("apple") << endl;
    cout << tree->search("appex") << endl;
    return 0;
}