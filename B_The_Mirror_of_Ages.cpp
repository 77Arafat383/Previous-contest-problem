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
const int N=1e6+5;

vector<int>v(N+2,0);
bool checking(int num)
{
    string str=to_string(num);
    string rv=str;
    rev(str);
    if(rv==str) return 1;
    return 0;
}
void pre()
{
    int cnt=0;
    for(int i=1; i<=N; i++)
    {
        if(checking(i)) cnt++;

        v[i]=cnt;

    }
}


void solve()
{
    int l,r;
    cin>>l>>r;
    cout<<v[r]-v[l-1]<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
pre();
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}