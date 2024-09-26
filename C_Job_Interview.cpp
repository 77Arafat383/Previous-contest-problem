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
    int n,m;
    cin>>n>>m;
    vector<ll>p(n+m+1),t(n+m+1);
    for(auto &it:p)  cin>>it;
    for(auto &it:t)  cin>>it;
    map<int,vector<int>>mp,mp2;
    int cnt=0;
    int cnt2=0;

    vector<ll>prio,nul;
    for(int i=0; i<n+m+1; i++)
    {
        if(p[i]>=t[i])
        {
            cnt++;
            prio.push_back(p[i]);
            nul.push_back(t[i]);
            
        }
        else
        {
            cnt2++;
            prio.push_back(t[i]);
            nul.push_back(p[i]);
        }
        mp[cnt].push_back(i);
        mp2[cnt2].push_back(i);
    }
    ll sum=0;
    
    for(int i=0; i<n+m+1; i++)
    {
        sum+=prio[i];
        prio[i]=sum;
    }

   sum=0;
    for(int i=0; i<n+m+1; i++)
    {
        sum+=nul[i];
        nul[i]=sum;
    }
    ll ans;
    for(int i=0; i<n+m+1; i++)
    {
         ans=0;
        ll e=n,d=m;
        if(p[i]>=t[i])
        {
            e++;
           
        }
        else
        {
            d++;
            
        }
       
        auto idx1=mp[e].begin();
        auto idx2=mp2[d].begin();
        if(idx1==mp[e].end()) *idx1=n+m+2;
        if(idx2==mp2[d].end()) *idx1=n+m+2;
        if(*idx1<=*idx2)
        {
            ans+=prio[*idx1];
            ans+=(nul[n+m]-nul[*idx1]);
            if(i<=*idx1)
            {
                ans-=prio[i];
            }
            else
            {
                ans-=nul[i];
            }

        }
        else
        {
            ans+=prio[*idx2];
            ans+=(nul[n+m]-nul[*idx2]);
            if(i<=*idx2)
            {
                ans-=prio[i];
            }
            else
            {
                ans-=nul[i];
            }

        }
        cout<<ans<<" ";

    }
    cout<<endl;

}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}