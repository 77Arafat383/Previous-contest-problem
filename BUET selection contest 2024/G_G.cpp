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
    int total=0;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>v[i][j];
            if(v[i][j]==1) total++;
        }
    }
    if(total%n!=0 and total%m!=0) 
    {
        cout<<"impossible "<<endl;
        return;
    }
    if( total%m!=0)
    {
        vector<int>row(n);
        int num=total/n;
        for(int i=0; i<n; i++)
        {
            int cnt=0;
            for(int j=0; j<m; j++) if(v[i][j]==1) cnt++;
            row[i]=cnt-num;
        }
        for(auto &it:row) cout<<it<<" "; cout<<endl;
        
       // vector<int>ache,lagbe;
        
    }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
  cout<<"Case "<<i<<": ";
solve();
}
    return 0;
}