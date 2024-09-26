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
    int n,m;
    cin>>n>>m;
    string str[m];
    for(int i=0; i<m; i++)
    {
        cin>>str[i];
    }

    vector<int>zeros(n,0),ones(n,0);
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        for(int j=0; j<m; j++)
        {
            if(str[j][i]=='?') cnt++;
            else if(str[j][i]=='1') ones[i]++;
            else zeros[i]++;
        }
        if(ones[i]>zeros[i]) swap(ones[i],zeros[i]);
        int dif=zeros[i]-ones[i];
            if(dif>=cnt)
            {
                ones[i]+=cnt;
                cnt=0;
            }
            else
            {
                ones[i]+=dif;
                cnt-=dif;
                int rest=cnt-cnt/2;
                cnt=cnt/2;
                ones[i]+=rest;
                zeros[i]+=cnt;
            }
       
    }
   
   ll ans=0;
    for(int i=0; i<n; i++)
    {
        ans+=ones[i]*1LL*zeros[i];
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