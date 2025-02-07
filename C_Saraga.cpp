//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

void solve()
{
    string str1,str2;
    cin>>str1>>str2;
    int n=str1.size();
    int m=str2.size();
    vector<int>last_idx(26,-1);
    for(int i=0; i<m-1; i++)
    {
        last_idx[str2[i]-'a']=i;
    }

    int ans=INT_MAX;
    int last;
    for(int i=1; i<n; i++)
    {
        if(last_idx[str1[i]-'a']!=-1)
        {
            int left=i+1;
            int right=m-last_idx[str1[i]-'a']-1;
            if(ans>left+right)
            {
                ans=left+right;
                last=i;
            }
        }
    }

    if(ans==INT_MAX)
    {
        cout<<-1<<en;
        return;
    }
     //cout<<last<<' '<<last_idx[str1[last]-'a']<<en;
    for(int i=0; i<=last; i++) cout<<str1[i];
    for(int i=last_idx[str1[last]-'a']+1; i<m; i++) cout<<str2[i];
    cout<<en;
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}