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
const int N=1e5;




void solve()
{
    string str;
    bool ok=true;
    while(cin>>str)
    {
        if(ok)
        {
            int n=str.size();
            n=(n-n/2);
            for(int i=0; i<n; i++)
            {
                str[i]-=32;
            }
            ok=false;
            cout<<str<<" ";
        }
        else
        {
            int n=str.size();
            n=n/2;
            if(str.size()&1) n++;
            for(int i=n; i<str.size(); i++)
            {
                str[i]-=32;
            }
            
            ok=true;
            cout<<str<<" ";
        }


    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}