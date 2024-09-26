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

const int N=1e4;
vector<pair<int,int>>dp[N];
vector<int>main_ans(N);
vector<int> dynamic(ll sum, vector<int>&v, int prev,bool ok=false)
{
    
   
    if(sum<0)
    {
        return;
    }
    if(sum==0)
    {
        if(main_ans.size()>ans.size())
        {
            main_ans=ans;
        }

        return;


    }
    for(auto &it:v)
    {
        if(it<=prev)
        dynamic(sum-it,v,ans, it);
    }

    return;


}


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    sort(v.rbegin(),v.rend());
    ll sum;
    cin>>sum;
    vector<int>ans;
    dynamic(sum,v,ans,M);
    if(main_ans.size()==N) cout<<-1<<endl;
    else
    {
        for(int i=1; i<main_ans.size(); i++) cout<<main_ans[i]<<" "; cout<<endl;
    }
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}