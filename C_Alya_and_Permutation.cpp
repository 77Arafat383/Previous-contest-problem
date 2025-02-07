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
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<en
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<en
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;
/*
this is simple for odd it must be last number for even i can make it 111 1111 this type of for maximum. 
it is too hard to calculate for huge length. But if I handle last few element it maybe accepted. 

*/
void solve()
{
    int n;
    cin>>n;
    if(n<=8)
    {
        int result=0;
        vector<int>ans={2,1,3,4,5,6,7,8};
        for(int i=1; i<=n; i++)
        {
            if(i&1) result&=ans[i-1];
            else result|=ans[i-1];
        }
        cout<<result<<en;
        for(int i=0; i<n; i++) cout<<ans[i]<<' '; cout<<en;
        
    }
    else if(n%2==0)
    {
        int tem=-1;
        for(int i=30; i>=0; i--)
        {
            if(n&(1<<i))
            {
                // found 1st set MSB;
                tem=(1<<i);
                break;
            }
        }
        vector<int>ans={tem, tem-1, tem-2, 3, 1};
        for(int i=n; i>=1; i--) 
        {
            if(i!=tem and i!=tem-1 and i!=tem-2 and i!=3 and i!=1) ans.push_back(i);
        }
        ll result=tem*2-1;// this answer should be 1111 111  111 this type.. 
        cout<<result<<en;
        rev(ans);
        printv(ans);
        
    }
    else
    {
        cout<<n<<en;
        n--;
        int tem=-1;
        for(int i=30; i>=0; i--)
        {
            if(n&(1<<i))
            {
                // found 1st set MSB;
                tem=(1<<i);
                break;
            }
        }
        vector<int>ans={n+1,tem, tem-1, tem-2, 3, 1};
        for(int i=n; i>=1; i--) 
        {
            if(i!=tem and i!=tem-1 and i!=tem-2 and i!=3 and i!=1 and i!=n+1) ans.push_back(i);
        }
        rev(ans);
        printv(ans);
        
    }
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