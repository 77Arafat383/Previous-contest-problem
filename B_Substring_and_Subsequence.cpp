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
    string a,b;
    cin>>a>>b;
    int ans=INT_MAX;
    int n=a.size(),m=b.size();
    for(int k=0; k<m; k++)
    {
        int cnt=0;
        int j=k;
       
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[j])
            {
               
                cnt++;
                j++;
            }
            if(j==m) break;
        }
        int dd=n+m-cnt;
        ans=min(ans,dd);



    }
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