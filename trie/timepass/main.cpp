// implementing trie data structure
#include <bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        TrieNode*child[26];
        bool isEndofWord;
        TrieNode(){
            isEndofWord = false;
            for(int i=0;i<26;i++){
                child[i] = nullptr;
            }
        }
};
class Trie {
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word){
        TrieNode* node = root;
        for(auto c:word){
            int index = c - 'a';
            if(node->child[index] == NULL){
                node->child[index] = new TrieNode();
            }
            node = node->child[index];
        }
        node->isEndofWord = true;
        cout<<"jai shree ram"<<endl;
        return;
    }
    bool search(string word){
        TrieNode* node = root;
        for(auto c:word){
            int index = c - 'a';
            if(node->child[index] == nullptr){
                return 0;
            }
            node = node->child[index];
        }
        return node->isEndofWord;
    }
    
    bool startsWith(string word) {
        TrieNode* node = root;
        for(auto c:word){
            int index = c - 'a';
            if(node->child[index] == nullptr){
                return 0;
            }
            node = node->child[index];
        }
        return 1;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Trie trie;
    trie.insert("hello");
    trie.insert("world");
    cout << trie.search("hello") << endl;
    cout << trie.search("world") << endl;
    cout << trie.search("trie") << endl;
    cout<<trie.search("helloworld")<<endl;
    cout<<trie.search("hel")<<endl;
    string s="Manoj";
    string t="s";
    return 0;
}