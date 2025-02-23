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
const int N=1e6;




void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n),freq(N+2,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    
    vector<bool>divisor(N+2,false);
    for(int i=freq.size(); i>=1; i--)
    {
        int cnt=0;
        for(int j=i; j<=N; j+=i)
        {
             cnt+=freq[j];
        }
        if(cnt>=k)
        {
            divisor[i]=true;
        }
    }

    vector<int>gc(N+1,0);
    for(int i=1; i<=N; i++)
    {
        if(divisor[i])
        {
            for(int j=i; j<=N; j+=i)
            {
                gc[j]=i;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<gc[v[i]]<<en;
    }
    
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