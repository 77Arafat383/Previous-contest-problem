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




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    map<pair<int,int>,int>m1,m2,m3;
    map<pair<int,int>,map<int,int>>mp1,mp2,mp3;
    for(int i=0; i<n-2; i++)
    {
        m1[{v[i],v[i+1]}]++;
        mp1[{v[i],v[i+1]}][v[i+2]]++;
        m2[{v[i+1],v[i+2]}]++;
        mp2[{v[i+1],v[i+2]}][v[i]]++;
        m3[{v[i],v[i+2]}]++;
        mp3[{v[i],v[i+2]}][v[i+1]]++;
    }
    ll ans=0;
    for(auto it:m1)
    {
        if(mp1[it.first].size()>1)
        {
            int total=it.second;
        int rest=0;
       // printm(mp1[it.first]);
        for(auto &bt:mp1[it.first])
        {
            rest++;
            ans+=(total-rest-(bt.second-1))*bt.second;
            rest+=(bt.second-1);
           
            
        }
        }
        //cout<<endl;
    }
    for(auto it:m2)
    {
        if(mp2[it.first].size()>1)
        {
            int total=it.second;
        int rest=0;
        for(auto &bt:mp2[it.first])
        {
            rest++;
            ans+=(total-rest-(bt.second-1))*bt.second;
            rest+=(bt.second-1);
           
        }

        }
        
    }
    for(auto it:m3)
    {
       if(mp3[it.first].size()>1)
       {
          int total=it.second;
        int rest=0;

        for(auto &bt:mp3[it.first])
        {
            rest++;
            ans+=(total-rest-(bt.second-1))*bt.second;
            rest+=(bt.second-1);
            
        }
       }
    }


     cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}