#include "bits/stdc++.h"
#define int long long
#define uint unsigned long long
#define vi vector<long long>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define nl cout << "\n"
#define dbg(var) cout << var << "\n"
#define all(v) v.begin(), v.end()
#define srt(v) sort(v.begin(), v.end())         // sort
#define mxe(v) *max_element(v.begin(), v.end()) // find max element in vector
#define mne(v) *min_element(v.begin(), v.end()) // find min element in vector
#define lowerbound(v, x) lower_bound(v.begin(), v.end(), x) - v.begin() // returns index of first element >= x
#define upperbound(v, x) upper_bound(v.begin(), v.end(), x) - v.begin() // returns index of first element > x
#define unq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define MOD 1000000007
// make sure to sort before applying unique // else only consecutive duplicates would be removed
#define bin(x, y) bitset<y>(x)
using namespace std;

void modadd(int &a, int b,int mod=MOD) { a = ((a % mod) + (b % mod)) % mod; }
void modsub(int &a, int b, int mod=MOD) { a = ((a % mod) - (b % mod) + mod) % mod; }
void modmul(int &a, int b, int mod=MOD) { a = ((a % mod) * (b % mod)) % mod; }
// ================================== take ip/op like vector,pairs directly!==================================

void longestPrefixSuffix(string &str,vector<int>&lps) {
    int n=str.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(str[j]==str[i]){
            lps[j]=lps[j-1]+1;
            i++;
        }
        else{
            while(i>0){
                i=lps[i-1];
                if(str[j]==str[i]){
                    lps[j]=i+1;
                    i++;
                    break;
                }
            }
        }
    }
    return;
}
int search(string &pat, string &txt) {
    int n = txt.size();
    int m = pat.size();
    vector<int> lps(m, 0);
    int result = 0;

    longestPrefixSuffix(pat, lps);

    int i = 0;
    int j = 0; 
    while (i < n) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }

        if (j == m) {
            // result.push_back(i - j);
            result++;
            j = lps[j - 1];
        } else if (i < n && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }

    return result;
}

void solve()
{
    string s, p;
    cin >> s >> p;

    int result = search(p, s);
    dbg(result);
    return;

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}