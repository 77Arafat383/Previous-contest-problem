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
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<int>div(n);
    for(int i=0; i<n; i++)
    {
         if(v[i]==1) 
         {
            div[i]=2;
            continue;
         }
         
         for(int j=1; j*j<=v[i]; j++)
         {
            if(v[i]%j==0)
            {
                div[i]=v[i]/j;
                if(j==1) continue;
                break;
            }
            div[i]=v[i];
         }

    }
    int ans=n; 
    for(int i=0; i<n; i++)
    {
        if(div[i]==v[i]) ans--;
    }
    cout<<ans<<endl;
    
   

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