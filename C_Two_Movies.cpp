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
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    int ra=0,rb=0,pn=0,pp=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==b[i])
       {
          if(a[i]<0) pn++;
          else if(a[i]>0) pp++;

       }
       else 
       {
         if(a[i]>b[i]) ra+=a[i];
         else rb+=b[i];
       }
    }
    //cout<<ra<<" "<<rb<<" "<<pn<<" "<<pp<<endl;
    if(ra>rb) swap(ra,rb);
    int dif=(rb-ra);
    if(dif>=pn) rb-=pn;
    else 
    {
        rb-=dif;
        pn-=dif;
        ra-=(pn-(pn/2));
        rb-=(pn/2);
    }
    if(ra>rb) swap(ra,rb);
    dif=rb-ra;
    if(dif>=pp) ra+=pp;
    else
    {
        ra+=dif;
        pp-=dif;
        ra+=pp/2;
        rb+=(pp-(pp/2));

    }
    int ans=min(ra,rb);
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}