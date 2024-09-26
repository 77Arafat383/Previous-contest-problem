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
    ll a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    ll dd=min({a,d});
    dd*=e;
    ll pp=min({b,c,d});
    pp*=f;
    ll ans1,ans2;
   ll rem=d-min(a,d);
    rem=min({b,c,rem});
    rem*=f;
   ans1=dd;
    if(rem>0) ans1+=rem;
     
       
    
    rem=d-min({b,c,d});
   rem=min({a,rem});
        rem*=e;
     ans2=pp;
       if(rem>0) ans2+=rem;
       ll ans=max(ans1,ans2);
       cout<<ans<<endl;
       

   
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}