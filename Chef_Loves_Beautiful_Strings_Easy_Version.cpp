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
    int num_extra=0;
    int point=0;
    int pivot=str[0]-'0';
    for(int i=1; i<n; i++)
    {
        int dd=str[i]-'0';
        if(dd!=pivot)
        {
            point++;
            pivot=dd;
        }
        else
        {
            num_extra++;
        }
    }
    //cout<<point<<" "<<num_extra<<endl;
    ll ans=0;
    int total=n-1;
    while(total>0)
    {
        if(point<total) ans+=point;
        else
        {
            
            point--;
            if(point>0)
            ans+=point;
        }
        total--;
    }
    cout<<ans<<endl;
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