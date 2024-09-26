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

int ff(int i,vector<int>&v,vector<char>&str,vector<bool>&vis,vector<int>&ans,bool &round, int &cnt)
{
    if(v[i]==i)
    {
        vis[i]=true;
        ans[i]=(str[i]=='0');
        return ans[i];
    }
    if(vis[i])
    {
        round=true;
        return round;
    }
    vis[i]=true;
    if(str[i]=='0') cnt++;
    int x=ff(v[i],v,str,vis,ans,round,cnt);
    if(round)
    {
        ans[i]=cnt;
        return round;
    }
    else
    {
        ans[i]=x+(str[i]=='0');
        return ans[i];
    }
}


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1),ans(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    vector<char>str(n+1);
    for(int i=1; i<=n; i++) cin>>str[i];
  //  printv(str);
    vector<bool>vis(n+1,false);
    for(int i=1; i<=n; i++)
    {
        bool round=false;
        int cnt=0;
        ff(i,v,str,vis,ans,round,cnt);
        
    }
    for(int i=1; i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
}


int main()
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