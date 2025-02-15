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




void arafat()
{
    int n;
    cin>>n;
    vector<ll>a(n+1),b(n+1),c(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }

    for(int i=1; i<=n; i++)
    {
        cin>>b[i];
        b[i]+=b[i-1];
    }

    for(int i=1; i<=n; i++)
    {
        cin>>c[i];
        c[i]+=c[i-1];
    }

    ll need=(a[n]+2)/3;

    for(int l=1; l<n-1; l++)
    {
            auto it=lower_bound(all(a),a[l]+need);
            int r=it-a.begin();
            if(r>=n) continue;//  not found;

            if(b[l]>=need and c[n]-c[r]>=need)
            {
                cout<<l+1<<' '<<r<<' '<<1<<' '<<l<<' '<<r+1<<' '<<n<<endl;
                return;
            }
            if(c[l]>=need and b[n]-b[r]>=need)
            {
                cout<<l+1<<' '<<r<<' '<<r+1<<' '<<n<<' '<<1<<' '<<l<<endl;
                return;
            }
    }

    for(int l=1; l<n-1; l++)
    {
        auto it=lower_bound(all(b),b[l]+need);
        int r=it-b.begin();
        if(r>=n) continue;

        if(a[l]>=need and c[n]-c[r]>=need)
        {
            cout<<1<<' '<<l<<' '<<l+1<<' '<<r<<' '<<r+1<<' '<<n<<en;
            return;
        }
        if(c[l]>=need and a[n]-a[r]>=need)
        {
            cout<<r+1<<' '<<n<<' '<<l+1<<' '<<r<<' '<<1<<' '<<l<<en;
            return;
        }
    }

    for(int l=1; l<n-1; l++)
    {
        auto it=lower_bound(all(c),c[l]+need);
        int r=it-c.begin();
        if(r>=n) continue;

        if(a[l]>=need and b[n]-b[r]>=need)
        {
            
            cout<<1<<' '<<l<<' '<<r+1<<' '<<n<<' '<<l+1<<' '<<r<<en;
            return;
        }
        if(b[l]>=need and a[n]-a[r]>=need)
        {
            cout<<r+1<<' '<<n<<' '<<1<<' '<<l<<' '<<l+1<<' '<<r<<en;
            return;
        }
    }
    cout<<"-1\n";
   
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
arafat();
}
    return 0;
}