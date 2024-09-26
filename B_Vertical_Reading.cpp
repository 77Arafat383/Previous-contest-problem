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
    string str,tem;
    cin>>str>>tem;
    int n=str.size();
    int m=tem.size();
    for(int i=0; i<n-1; i++)
    {
        if(str[i]==tem[0])
        {
            if(m==1)
            {
                cout<<"Yes\n";
                return;
            }
            int j=i+1;

            while(j<n and str[j]!=tem[1]) j++;
            if(j==n)
            {
                cout<<"No\n";
                return;
            }
            int dd=(j-i);
            bool ok=true;
            j=0;
            for(int k=0; k<m; k++)
            {
                if(str[j+i]==tem[k])
                {
                   j+=dd;
                }
                else
                {
                    ok=false;
                    break;
                }
            }
            if(ok)
            {
                cout<<"Yes\n";
                return;
            }
            
        }
    }
    cout<<"No\n";
    return;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}