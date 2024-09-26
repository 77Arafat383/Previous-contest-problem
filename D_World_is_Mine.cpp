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
const int N=1e4;




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n); for(auto &it:v) cin>>it;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    sort(all(v));
    map<int,int>mp;
    for(auto &it:v) mp[it]++;
    ll alice=0;
    ll boob=0;
    vector<int>dis;
    for(auto &it:mp) if(it.second==1) dis.push_back(it.first);
    vector<bool>vis(N,0);
    int i=0,j=0;
    int pv=-1;
    int m=dis.size();
  // printv(v);
    while(i<n and j<dis.size())
    {
        for(; i<n; i++)
        {
             if(i<n and pv<v[i] and !vis[v[i]])
        {
            vis[v[i]]=1;
            alice++;
            boob++;
            pv=v[i];
            break;
        }

        }
       
       for(; j<m; j++)
       {
          if(!vis[dis[j]] and dis[j]>pv)
          {
            boob--;
            vis[dis[j]]=1;
            break;
          }
       }
        
        

    }

   //cout<<boob<<" "<<alice<<endl;
   bool sm=true;
    while(i<n)
    {
        if(mp[v[i]]<=boob and v[i]>pv and !vis[v[i]] and !sm)
        {
           
           boob-=mp[v[i]];
           vis[v[i]]=1;
        }
        else if(!vis[v[i]] and v[i]>pv and !sm)
        {
            alice++;
            boob++;
            pv=v[i];
            vis[v[i]]=1;
        }
        if(!vis[v[i]] and v[i]>pv and sm)
        {
            alice++;
            boob++;
            pv=v[i];
            vis[v[i]]=1;
            sm=false;
        }
        
        i++;

    }
    cout<<alice<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++)
{
  //  cout<<"test case "<<i<<endl;
    solve();
}
    return 0;
}