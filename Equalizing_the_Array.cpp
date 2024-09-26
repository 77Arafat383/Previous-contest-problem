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




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n); for(auto &it:v) cin>>it;
    int old_min=*min_element(all(v));
 
    int new_min=old_min+1;
    bool ok=false;

    
    
    while(old_min!=new_min or !ok)
    {
        ok=true;
        for(int i=0; i<n; i++)
        {
            while(v[i]>old_min)
            { ok=false;
                v[i]/=2;
               
            }
            if(v[i]<new_min) new_min=v[i];
        }
        if(old_min>new_min) old_min=new_min;
    }
   int ans=0;

   while(v[0]>0)
   {
      ans++;
   
      v[0]/=2;
   }
   ans++;
   cout<<ans<<endl;
 
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}