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




vector<int>dp[M];

vector<int> create(int n)
{
    if(dp[n].size()>1) return dp[n];
    int i=0;
    while((1<<i)<n)
    {
        i++;
    }
    int baki=(1<<i)-n;
    
    vector<int> tem=create(-baki);
    vector<int>ans;
    for(int i=0; i<tem.size(); i++)
    {
        if(tem[i]==1) ans.push_back(-1);
        else if(tem[i]==-1) ans.push_back(1);
        else ans.push_back(0);
    }
    int k=tem.size();
    for(int j=k; j<i; j++)
    {
        tem.push_back(0);
    }
    tem.push_back(1);

}

int main()
{
int t;
cin>>t;
dp[1]={1};
dp[2]={0,1};
dp[3]={-1,0,1};
dp[4]={0,0,1};
dp[5]={1,0,1};
dp[6]={0,-1,0,1};
dp[7]={-1,0,0,0};
dp[8]={0,0,0,1};
dp[9]={1,0,0,1};
dp[10]={0,1,0,1};
dp[11]={-1,0,-1,0,1};
dp[12]={0,0,1,0,1};
dp[13]={-1,0,-1,0,1};
dp[14]={0,-1,0,0,1};
w(t)
{
    int x;
    cin>>x;
    vector<int>v=create(x);

}
    return 0;
}