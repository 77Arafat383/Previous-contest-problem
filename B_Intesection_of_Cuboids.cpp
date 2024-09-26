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
    int a,b,c,d,e,f,g,h,i,j,k,l;
    cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l;
    int x_min1=min(a,d);
    int x_max1=max(a,d);
    int y_min1=min(b,e);
    int y_max1=max(b,e);
    int z_min1=min(c,f);
    int z_max1=max(c,f);
    

    int x_min2=min(g,j);
    int x_max2=max(g,j);
    int y_min2=min(h,k);
    int y_max2=max(h,k);
    int z_min2=min(i,l);
    int z_max2=max(i,l);

    int overlap_x=(x_max1>x_min2  and x_min1<x_max2);
    int overlap_y=(y_max1>y_min2  and y_min1<y_max2);
    int overlap_z=(z_max1>z_min2  and z_min1<z_max2);
    if(overlap_x and overlap_y and overlap_z)
    {
        cout<<"Yes\n";
        return;
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