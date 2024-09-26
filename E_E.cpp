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
    string str,tem;
    cin>>str>>tem;
    int n=str.size();
    int m=tem.size();
    int i=0,j=0,k=0;
    int ans=0;
    for(; i<n; i++)
    {
        if(str[i]==tem[k])
        {
            j=i;
            while(j<n and k<m and str[j]==tem[k])
            {
                j++;
                k++;

            }
            if(k==m)
            {
                  ans++;
                  i=j-1;
            }
            k=0;
        }

    }
    cout<<ans<<endl;
    
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