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




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    map<int,vector<int>>mp;
    for(int i=0; i<n-2; i++)
    {
        if(v[i]==1)
        {
            mp[v[i]]=v;
            mp[v[i]][0]=0;
        }
        for(int j=i+1; j<n; j++)
        {
            if(v[j]%v[i]) mp[v[i]].push_back(v[j]);
        }
    }
   
    int ans=0;
    for(auto &[x,vv]:mp)
    {
        if(vv.size()==0) continue;
        for(int i=0; i<vv.size()-1; i++)
        {
            if(x==1 and i==0) continue;
            for(int j=i+1; j<vv.size(); j++)
            {
                if(vv[j]%vv[i]) ans++;

            }

        }
    }
    cout<<ans<<endl;


    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}