//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pI(n);
    for (int i = 1; i < n; i++) {
        int j = pI[i-1];
        while (j > 0 && s[i] != s[j])
            j = pI[j-1];
        if (s[i] == s[j])
            j++;
        pI[i] = j;
    }
    return pI;
}


void solve()
{
    string str;
    cin>>str;
    vector<int>v=prefix_function(str);
    vector<int>ans;
    int j=v.back()-1;
   // printv(v);
    if(v.back()!=0) ans.push_back(v.back());
    while(j>0)
    {
        if(v[j]!=0) ans.push_back(v[j]);
        j=v[j]-1;
    }
    sort(all(ans));
    printv(ans);
   
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}