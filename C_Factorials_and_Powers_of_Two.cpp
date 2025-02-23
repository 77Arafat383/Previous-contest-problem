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
const ll N=1e12;
vector<ll>pwr;

void pre_cal()
{
    pwr.push_back(1);
    ll i=2;
    while(pwr.back()*i<=N)
    {
        pwr.push_back(pwr.back()*i);
        i++;
    }
}

void solve()
{
    ll sum;
    cin>>sum;
    ll n=pwr.size();
    //cout<<n<<en;
    int ans=100;
    for(ll mask=0; mask<(1<<n); mask++)
    {
        //check;
        ll tem=sum;
        for(ll i=0; i<n; i++)
        {
            if(mask&(1<<i)) tem-=pwr[i];
        }
        if(tem<0) continue;
        /*
          bit masking er maddome subsequence of factorial use korar pore 
          baki joto ja thakbe tar set bit gula ak ak ta 2 er power.. 
          so number of taken factorial and extra laga set bit. 
        */
        ans=min(ans,__builtin_popcountll(mask)+__builtin_popcountll(tem));
    }
    if(ans==100)
    {
        cout<<"-1\n";
        return;
    }
    cout<<ans<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
pre_cal();
//cout<<pwr.size()<<en;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}