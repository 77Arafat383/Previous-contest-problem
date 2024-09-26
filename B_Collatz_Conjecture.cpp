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
const int N=1e5;




void solve()
{
    ll x,y,k;
    cin>>x>>y>>k;
    bool ok=false;
    while(k>0)
    {
        int next_div=x%y;
        next_div=y-next_div;
      //  if(next_div==y) next_div=0;
        if(k>=next_div) 
        {
            k-=next_div;
            x+=next_div;
            while(x%y==0 and x>1)
            {
                 x/=y;

            }
            
            if(x==1 and k>0)
            {
                ok=true;
                break;
            }
        }
        else
        {
            x+=k;
            k=0;
            break;
        }
        if(k==0)
        {
            break;
        }
    }
    if(ok)
    {
        int dd=k/(y-1);
        k-=(dd*(y-1));
        x+=k;
    }
    cout<<x<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}