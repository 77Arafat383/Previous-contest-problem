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




void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    vector<int>v(26,0);
    for(int i=0; i<n; i++)
    {
        v[str[i]-'a']++;
    }
    string ans="";
    while(ans.size()<n)
    {
        for(int i=0; i<26; i++)
        {
            if(v[i]>0)
            {
                ans.push_back(i+'a');
                v[i]--;
            }
        }
    }

    cout<<ans<<endl;
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