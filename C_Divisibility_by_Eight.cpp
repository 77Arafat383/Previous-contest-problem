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




void solve()
{
    string str;
    cin>>str;
    int n=str.size();
    for(int i=0; i<n; i++)
    {
       // if(str[i]=='0') continue;
        int value=str[i]-'0';
        if(value%8==0)
        {
            cout<<"YES\n";
            cout<<value<<'\n';
            return;
        }
        for(int j=i+1; j<n; j++)
        {
            int value2=value*10+(str[j]-'0');
            if(value2%8==0)
            {
                cout<<"YES\n";
                cout<<value2<<'\n';
                return;
            }
            for(int k=j+1; k<n; k++)
            {
               int  value3=value2*10+(str[k]-'0');
                if(value3%8==0)
                {
                    cout<<"YES\n";
                    cout<<value3<<'\n';
                    return;
                }
            }
        }
    }
    cout<<"NO\n";
    
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