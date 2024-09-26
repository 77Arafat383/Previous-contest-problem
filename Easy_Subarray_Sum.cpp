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
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    int i=0;
    int operation=0;
    while( i<n)
    {
        if(v[i]>0)
        {
            break;
        }
        i++;

    }
    int j=n-1;
    
    while(j>=0)
    {
        if(v[j]>0) break;
        j--;
    }
    if(j<=i)
    {
        cout<<0<<endl;
        return;
    }
    for(; i<=j; i++)
    {
        if(v[i]<0) operation++;
    }
    cout<<operation<<endl;
}


int main()
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