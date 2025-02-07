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
        ll n,h;
        cin>>n>>h;
        vector<ll>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        ll lo=0,hi=n;
        ll ans=0;
        while(lo<=hi)
        {
            ll mid=lo+(hi-lo)/2;
            priority_queue<ll>pq;
            for(int i=0; i<mid; i++)
            {
               pq.push(v[i]);
            }
            ll sum=0;
            for(int i=0; i<mid/2; i++)
            {
                sum+=pq.top();
                pq.pop();
                pq.pop();
            }
            if(!pq.empty())  // if it's odd
            {
                sum+=pq.top();
                pq.pop();
            }

            if(sum<=h)
            {
                ans=mid;
                lo=mid+1;
            }
            else 
            {
                hi=mid-1;
            }
        }
        cout<<ans<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}