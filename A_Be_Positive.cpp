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
    int pos=0,neg=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]<0) neg++;
        else if(v[i]>0) pos++;
        
    }
    int mid=n/2+(n%2);
    if(pos>=mid)
    {
        cout<<"1"<<endl;
        return;
    }
    else if(neg>=mid)
    {
        cout<<"-1"<<endl;
        return;
    }
    cout<<0<<endl;
    return;
}


int main()
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