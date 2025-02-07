//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;



int f(string s) {
    int n = s.size();
    if (n == 0) return 0;

    
    vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));

   
    for (int i = 0; i < n; ++i) {
        isPalindrome[i][i] = true;
    }
    for (int len = 2; len <= n; len++) {  
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (s[i] == s[j]) {
                if (len == 2) {
                    isPalindrome[i][j] = true;
                } else {
                    isPalindrome[i][j] = isPalindrome[i + 1][j - 1];
                }
            }
        }
    }

   
    vector<int> cuts(n, INT_MAX);

    for (int i = 0; i < n; ++i) {
        if (isPalindrome[0][i]) {
            cuts[i] = 0;
        } else {
            for (int j = 0; j < i; ++j) {
                if (isPalindrome[j + 1][i] && cuts[j] + 1 < cuts[i]) {
                    cuts[i] = cuts[j] + 1;
                }
            }
        }
    }

    return cuts[n - 1];
}


void solve()
{
    string str;
    cin>>str;
    cout<<f(str)<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}