#include <iostream>
#include <string>

void preprocess_strong_suffix(int *shift, int *bpos, const std::string& pat, int m)
{
    int i = m, j = m + 1;
    bpos[i] = j;

    while (i > 0)
    {
        while (j <= m && pat[i - 1] != pat[j - 1])
        {
            if (shift[j] == 0)
                shift[j] = j - i;
            j = bpos[j];
        }
        i--;
        j--;
        bpos[i] = j;
    }
}

void preprocess_case2(int *shift, int *bpos, const std::string& pat, int m)
{
    int i, j;
    j = bpos[0];
    for (i = 0; i <= m; i++)
    {
        if (shift[i] == 0)
            shift[i] = j;
        if (i == j)
            j = bpos[j];
    }
}

void search(const std::string& text, const std::string& pat)
{
    int s = 0, j;
    int m = pat.length();
    int n = text.length();

    int bpos[m + 1], shift[m + 1];

    for (int i = 0; i < m + 1; i++)
        shift[i] = 0;

    preprocess_strong_suffix(shift, bpos, pat, m);
    preprocess_case2(shift, bpos, pat, m);

    while (s <= n - m)
    {
        j = m - 1;
        while (j >= 0 && pat[j] == text[s + j])
            j--;
        if (j < 0)
        {
            std::cout << "pattern occurs at shift = " << s << std::endl;
            s += shift[0];
        }
        else
            s += shift[j + 1];
    }
}

int main()
{
    std::string text = "ABAAAABAACD";
    std::string pat = "ABA";
    search(text, pat);
    return 0;
}
