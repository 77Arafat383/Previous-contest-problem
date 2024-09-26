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
    int st=0,room=0;
    int mx=0;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            if(st<mx) st++;
            else mx++,st++;
        }
        else
        {
            int total=st-room;
            if(total>2)
            {
                
               if(total&1)
               {
                 ans+=total/2;
                st-=total/2;
                room+=total/2;
               }
               else
               {
                 ans+=total/2-1;
                st-=(total/2-1);
                room+=total/2-1;
               }
            }

        }
    }

    ans+=mx-room;
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}