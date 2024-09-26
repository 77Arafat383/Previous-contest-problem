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
    string str;
    cin>>str;
    int sq=sqrt(n);
    if(sq*sq!=n)
    {
        cout<<"No\n";
        return;
    }
    int k=0;
    for(int i=0; i<sq; i++)
    {
        for(int j=0; j<sq; j++)
        {
            if(i==0 or j==0 or i==sq-1 or j==sq-1)
            {
                if(str[k]!='1')
                {
                    cout<<"No\n";
                    return;
                }
            }
            else
            {
                if(str[k]!='0')
                {
                    cout<<"No\n";
                    return;
                }
            }
            k++;
        }
    }
    cout<<"Yes\n";
    return;
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