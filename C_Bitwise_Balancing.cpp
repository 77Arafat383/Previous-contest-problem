//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;


//this is my own analysis... Although I am pretty much confuse about carry.... 

void solve()
{
    ll b,c,d,a=0;
    cin>>b>>c>>d;
    for(int i=0; i<62; i++)
    {
        int tb=(b&(1LL<<i));
        int tc=(c&(1LL<<i));
        int td=(d&(1LL<<i));

        if(td)
        {
             if(!tb and tc)
             {
                cout<<-1<<endl;
                return;
             }
             if(!tb) a|=(1LL<<i);
        }
        else
        {
            if(tb and !tc)
            {
                cout<<-1<<endl;
                return;
            }
            if(tb) a|=(1LL<<i);

        }
    }
    cout<<a<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}