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


ll ans;
void dfs(int a, int b, int pre ,int cnt)
{
    if(a==b)
    {
        ans=cnt+1;
        return;
    }
    int d=a/2;
    int e=a*2;
    int f=e+1;
    if(d!=pre and d>0)
    {
        dfs(d,b,a,cnt+1);
    }
    if(e!=pre and e<=b)
    {
        dfs(e,b,a,cnt+1);
    }
    if(f!=pre and f<=b)
    {
        dfs(f,b,a,cnt+1);
    }

     
}

void solve()
{
    int a,b;
    cin>>a>>b;
    int cnt=0;
    dfs(a,b,-1,cnt);
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}