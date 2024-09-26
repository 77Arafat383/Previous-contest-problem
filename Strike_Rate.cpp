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
    int n;
    cin>>n;
    vector<double>v(n);
    for(auto &it:v) cin>>it;
   double ans=INT_MIN;
   double sum=0;
    int idx=-1;
    for(int i=0; i<n; i++)
    {
        sum+=v[i];
        double dd=sum/(i+1);
        if(dd>=ans)
        {
            idx=i+1;
            ans=dd;
        }
    }
    cout<<idx<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}