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
    double k;
    cin>>n>>k;
    k*=10;
    string str;
    cin>>str;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    ll ans=0;
    char tar=str[0];
    for(int i=0; i<n; i++)
    {
        if(str[i]==tar)
        {
            for(int j=i+1; j<n; j++)
            {
                if(str[j]!=tar)
                {
                    double dd=v[j]-v[i];
                    dd/=2;
                    dd=abs(dd);

                    if(dd<=k)
                    {
                        ans++;
                    }
                }
            }

        }

    }
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