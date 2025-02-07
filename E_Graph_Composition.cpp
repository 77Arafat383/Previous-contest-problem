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

int get(int a, vector<int>&p)
{
     if(p[a]==a) return a;
    return get(p[a],p);
}

void unite(int a, int b,vector<int>&p,vector<int>&sz,int &cnt)
{
    a=get(a,p);
    b=get(b,p);
    if(a==b) return ;
    if(sz[a]<sz[b]) swap(a,b);
    p[b]=a;
    sz[a]+=sz[b];
    sz[b]=0;
    cnt--;


}
void solve()
{
    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<pair<int,int>>eF,eG;
    for(int i=0; i<m1; i++)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        eF.push_back({l,r});
    }
    for(int i=0; i<m2; i++)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        eG.push_back({l,r});
    }
    // declaration for dsu... 
    vector<int>pF(n),pG(n),szF(n,1),szG(n,1);
    int cF=n,cG=n;
    for(int i=0; i<n; i++)
    {
        pF[i]=i;
        pG[i]=i;
    }

    for(auto &[a,b]:eG)
    {
       unite(a,b,pG,szG,cG);
    }

    int ans=0;
     
    for(auto &[a,b]:eF)
    {
        if(get(a,pG)!=get(b,pG))
        {
            // if not ultimate parents same.. 
            ans++;
        }
        else
        {
            // g er modde jehetu ultimate parents same so bina khoroch e f er modde o kore dey
            unite(a,b,pF,szF,cF);
        }
    }

    ans+=cF-cG; 
    cout<<ans<<endl;
    

}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}