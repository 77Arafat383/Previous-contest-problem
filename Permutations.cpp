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
    if(n<=3)
    {
        if(n==1)
        {
            cout<<n<<endl;
            return;
        }
        cout<<"NO SOLUTION\n";
        return;
    }
    vector<int>ans;
    
    int i=2;
    while(i<=n)
    {
        ans.push_back(i);
        i+=2;

    }
    i=1;
    while(i<=n)
    {
        ans.push_back(i);
        i+=2;
    }
    printv(ans);
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