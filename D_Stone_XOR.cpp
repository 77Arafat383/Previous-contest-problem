//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;


#define F first
#define S second


int n;
ll a[N];
vector<ll> dp[N];
void solve()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[1<<i];
	for(int i=1;i<(1<<n);i++) 
    {
        if(__builtin_popcount(i)>1)
        {
            int x=__builtin_ctz(i);
            a[i]=a[i^(1<<x)]+a[1<<x];
        }
    }
	dp[0].push_back(0);
	for(int i=1;i<(1<<n);i++){
		int _=__builtin_ctz(i);
		for(int j=i;j;j=(j-1)&i) if((j>>_)&1){
			for(auto x:dp[i^j]) dp[i].push_back(x^a[j]);
		}
		sort(dp[i].begin(),dp[i].end());
		dp[i].erase(unique(dp[i].begin(),dp[i].end()),dp[i].end());
	}
	cout<<dp[(1<<n)-1].size()<<'\n';
	return;
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