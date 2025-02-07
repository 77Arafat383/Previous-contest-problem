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
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='*') cnt++;
        }
        if(cnt==0 or cnt==n)
        {
            cout<<0<<en;
            return;
        }
        else if(cnt&1)
        {
            int idx=-1;
            int mid=(cnt+1)/2;
            for(int i=0; i<n; i++)
            {
                if(str[i]=='*' and mid) mid--,idx=i;

            }
            ll ans=0;
            cnt=0;
            for(int i=idx; i>=0; i--)
            {
                if(str[i]!='*') cnt++;
                else ans+=cnt;
            }
            cnt=0;
            for(int i=idx; i<n; i++)
            {
                if(str[i]!='*') cnt++;
                else ans+=cnt;
            }
            cout<<ans<<en;
        }
        else
        {
            int mid1=cnt/2;
            int mid2=mid1-1;
            int idx=-1;
            for(int i=0; i<n; i++)
            {
                if(str[i]=='*' and mid1) mid1--,idx=i;

            }
            ll ans1=0;
            cnt=0;
            for(int i=idx; i>=0; i--)
            {
                if(str[i]!='*') cnt++;
                else ans1+=cnt;
            }
            cnt=0;
            for(int i=idx; i<n; i++)
            {
                if(str[i]!='*') cnt++;
                else ans1+=cnt;
            }
            idx=-1;
            for(int i=0; i<n; i++)
            {
                if(str[i]=='*' and mid2) mid2--,idx=i;

            }
            ll ans2=0;
            cnt=0;
            for(int i=idx; i>=0; i--)
            {
                if(str[i]!='*') cnt++;
                else ans2+=cnt;
            }
            cnt=0;
            for(int i=idx; i<n; i++)
            {
                if(str[i]!='*') cnt++;
                else ans2+=cnt;
            }

            cout<<min(ans1,ans2)<<en;
        }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}