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

ll pabo(vector<ll>& v , ll n,ll  time,int k)
{
    
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=(time/v[i]);
        if(sum>=k)
        {
            break;
        }
    }
    return sum;

}


void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    if(n==1)
    {
        cout<<k*v[0]<<endl;
        return;
    }
    ll ans=1e18+10;
    ll en=ans,st=0;
    while(en>=st)
    {
        ll mid=(st+en)/2;
        ll num=pabo(v,n,mid,k);
        if(num>=k)
        {
          //  cout<<"asenai\n";
            
            //cout<<mid<<endl;
            ans=mid;
            en=mid-1;
        }
        else
        {
            st=mid+1;
        }
        //cout<<num<<endl;
    }
    cout<<ans<<endl;

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}