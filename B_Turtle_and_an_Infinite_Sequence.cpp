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







int main()
{
int t;
cin>>t;
vector<vector<int>>v;
vector<int>tem;
for(int i=0; i<100; i++)
{
    tem.push_back(i);
}
v.push_back(tem);
int k=100;
for(int i=1; i<=50; i++)
{
    tem.clear();
    tem.push_back(v[i-1][0]|v[i-1][1]);
    k--;
    for(int j=1; j<k; j++)
    {
        tem.push_back(v[i-1][j-1]|v[i-1][j]|v[i-1][j+1]);
    }
    v.push_back(tem);
}

for(int i=0; i<20; i++)
{
    for(int j=0; j<35; j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
w(t)
{
    int x,y;
    cin>>x>>y;

}

    return 0;
}