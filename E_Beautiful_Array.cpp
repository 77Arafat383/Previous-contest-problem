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

    ll n,k;
    cin>>n>>k;
    map<ll,int>mp;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
    }
    vector<ll>v;
    vector<ll>next,prev;
    for(auto &[x,y]:mp)
    {
        if(y&1)
        {
            v.push_back(x);
        }

    }
    prev.push_back(-1);
   
    for(int i=0; i<=n; i++)
    {
       prev.push_back(i);
        next.push_back(i+1);
    }
    next[v.size()-1]=-1;
    

    map<int,int>eleminate;
    int ans=0;
    int life=0;
    if(n&1) life=1;
    int total=v.size();
    for(int i=0; i!=-1; i=next[i])
    {
        
        bool ok=false;
        int j=next[i];
        while(j!=-1)
        {
            int dif=abs(v[i]-v[j]);
            if(dif%k==0)
            {
                cout<<v[i]<<" "<<v[j]<<endl;
               
              next[prev[j]]=next[j];
               prev[next[j]]=prev[j];
              ans+=dif/k;
            total-=2;
                ok=true;
                break;
            }
            j=next[j];
        }
        if(total<2)
        {
            break;
        }
        if(!ok and life)
        {
            life=0;
        }
        else if(!ok )
        {
            cout<<-1<<endl;
            return;
        }

    }
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}