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
    string str;
    cin>>str;
    int n=str.size();
    int carry=0;
    for(int i=n-1; i>=0; i--)
    {
        int digit=str[i]-'0';
        digit-=carry;
        if(i==0 and digit>0)
        {
            cout<<"NO\n";
            return;
        }
        else if(i==0 and digit==0)
        {
            cout<<"YES\n";
            return;
        }
        else if(digit<0)
        {
            cout<<"NO\n";
            return;
        }
        digit=10+digit;
        carry=1;
        if(digit>18)
        {
            cout<<"NO\n";
            return;
        }
    }
    
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