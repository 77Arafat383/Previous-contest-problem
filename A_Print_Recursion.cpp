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


void print(int n)
{
    if(n==0) return;
    cout<<"I love Recursion\n";
    print(n-1);
}

void solve()
{
    int n;
    cin>>n;
    print(n);
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}