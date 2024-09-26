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
    vector<ll>hash1(n+5),hash2(n+5),ppl1(n+5),ppl2(n+5);
    ll ans=-1;
    hash1[0]=(str[0]-'a'+1);
    hash2[0]=(str[0]-'a'+1);
    ppl1[0]=1;
    ppl2[0]=2;
    ll pw1=29,pw2=31,p1=29,p2=31;
    for(int i=1; i<n; i++)
    {
        hash1[i]=(hash1[i-1]+(str[i]-'a'+1)*pw1)%M;
        hash2[i]=(hash2[i-1]+(str[i]-'a'+1)*pw1)%M;
        ppl1[i]=pw1%M;
        ppl2[i]=pw2%M;
        pw1=(pw1*p1)%M;
        pw2=(pw2*p2)%M;
    }

    for(int i=0; i<n-1; i++)
    {
        if(i>=n-i-1)
        {
            int ii=i;
            int jj=n-i-1;
            

            ll pref1=hash1[ii];
            ll suf1=(hash1[n-1]-hash1[jj-1]+M)%M;
            ll pw1=ppl1[jj]%M;


            ll pref2=hash2[ii];
            ll suf2=(hash2[n-1]-hash2[jj-1]+M)%M;
            ll pw2=ppl2[jj]%M;

            if(((pw1*pref1)%M==suf1)  and ((pw1*pref2)%M==suf2))
            {
                ans=i;
                break;

            }
        }
    }

    if(ans==-1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0; i<=ans; i++) cout<<str[i]; cout<<endl;
    
}


signed main()
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