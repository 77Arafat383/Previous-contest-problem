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
    vector<char>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
   // printv(v);
    if(n%2==0)
    {
        map<char,int>odd,even;
        for(int i=1; i<=n; i++)
        {
            if(i&1) odd[v[i]]++;
            else even[v[i]]++;
        }
        int mx_odd=0,mx_even=0;
       for(char c='a'; c<='z'; c++)
       {
          mx_odd=max(mx_odd,odd[c]);
          mx_even=max(mx_even,even[c]);
       }
        int half=n/2;
        int ans=n-mx_odd-mx_even;
        cout<<ans<<endl;
        return;
    }
    map<char,int>after[3],before[3];
    for(int i=1; i<=n; i++)
    {
        after[i&1][v[i]]++;
    }
    int ans=INT_MAX;
    for(int i=1; i<=n; i++)
    {
        //removing i'th character....
        after[i&1][v[i]]--;
        int odd_mx=0,even_mx=0;
        for(char c='a'; c<='z'; c++)
        {
            odd_mx=max(odd_mx,before[1][c]+after[0][c]);
            even_mx=max(even_mx,before[0][c]+after[1][c]);

        }
        
        ans=min(ans,n-odd_mx-even_mx);
        before[i&1][v[i]]++;

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