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
    ll n;
    cin>>n;
    ll total=n*(n+1)/2;
    if(total&1) 
    {
        cout<<"NO\n";
        return;
    }
    total/=2;
    cout<<"YES\n";
    vector<int>a,b;
    ll sum=0;
    for(int i=n; i>=1;i--)
    {
        if(sum+i<=total)
        {
            a.push_back(i);
            sum+=i;
        }
        else
        {
            b.push_back(i);
        }
    }
    sort(all(a));
    sort(all(b));
    cout<<a.size()<<endl;
    printv(a);

     cout<<b.size()<<endl;
    printv(b);
    
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}