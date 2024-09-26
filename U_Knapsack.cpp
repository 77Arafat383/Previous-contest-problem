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


const int N=50;
vector<int>v(N),wt(N);
ll f(int i,ll value, ll weight, ll limit)
{
    if(weight<=limit and i==0)
    {
        
        //cout<<value<<endl;
        
        return value;
    }
    if(weight>limit  or i==0)
    {
        return 0;
    }
    

    return max(f(i-1,value+v[i-1],weight+wt[i-1],limit),f(i-1,value,weight,limit));
}

void solve()
{
    ll n,W;
    cin>>n>>W;
    
    for(int i=0; i<n; i++)
    {
        cin>>wt[i]>>v[i];
    }
    cout<<f(n,0,0,W)<<endl;

    // for(int i=0; i<n; i++)
    // {
    //     cout<<v[i]<<" "<<wt[i]<<endl;
    // }
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}