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
    vector<int>v;
    int j=2;
    for(int i=1; i<=n+6; i+=2)
    {
        v.push_back(j);
        v.push_back(j+1);
        j+=4;

    }
    if(n<3)
    {
        if(n==1)
        {
            cout<<2<<endl;
            return;
        }
        if(n==2)
        {
            cout<<2<<" "<<7<<endl;
            return;
        }
        
    }
    for(int i=0; i<n-3; i++) cout<<v[i]<<" ";
    if(n&1)
    {
        int j=n-3+1;
        for(int i=0; i<3; i++)
        {
            cout<<v[j]<<" ";
            j+=2;
        }
        cout<<endl;
        return;
    }
    else
    {
        int j=n-3;
        for(int i=0; i<3; i++)
        {
            cout<<v[j]<<" ";
            j+=2;
        }
        cout<<endl;
        return;
    }
    

    
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