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
    string str,tem;
    cin>>str>>tem;
    int n=str.size();
    int m=tem.size();
    bool ok=false;
    int j=0;
    for(int i=0; i<m and j<n; j++)
    {
        if(str[j]==tem[i]) i++;
        else if(str[j]=='?')
        {
            str[j]=tem[i];
             i++;
        }
        if(i==m)
        {
            ok=true;
        }


    }
    if(!ok)
    {
        cout<<"NO\n";
        return;
    }
    
    cout<<"YES\n";
    for(; j<n; j++)
    {
        if(str[j]=='?') str[j]='a';
    }
    cout<<str<<endl;
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