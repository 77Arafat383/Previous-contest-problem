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




void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n+1),pref(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        pref[i]=pref[i-1]+v[i];
    }
    
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        
        ll pivote=0;
        ll round=0;
        ll dd=l;
        if(dd<=n) round=0;
        else
        {
            dd-=n;
            round=dd/n;
            pivote=round+1;
        }

        
    }


}


int main()
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