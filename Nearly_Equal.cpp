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
    int n,m;
    cin>>n>>m;
    string str,tem;
    cin>>str>>tem;
    int st=0,en=m;
    int ans=INT_MAX;
    while(en<=n)
    {
        int temp=0;
        int i,j;
        for(i=st,j=0; i<en and j<m; i++,j++)
        {
            if(str[i]!=tem[j]) temp++;


        }
        ans=min(ans,temp);
        st++;
        en++;
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