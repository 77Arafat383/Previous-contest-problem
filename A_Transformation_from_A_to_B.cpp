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
     int a,b;
     cin>>a>>b;
     bool ok=false;
      vector<int>ans;
     while(b>=a)
     {
        if(b==a)
        {
            ans.push_back(b);
            ok=true;
            break;
        }
        if(b%10==1)
        {
            ans.push_back(b);
            b-=1;
            b/=10;

        }
        else if(!(b&1))
        {
            ans.push_back(b);
            b/=2;
        }
        else
        {
            ok=false;
            break;
        }
     }
     if(b<a)
     {
        ok=false;
     }
     if(!ok)
     {
        cout<<"NO\n";
        return;
     }
     cout<<"YES\n";
     rev(ans);
     cout<<ans.size()<<endl;
     printv(ans);
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}