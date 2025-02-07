//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

void arafat()
{
    int n;
    cin>>n;
    vector<int>single(2*n+3),presingle(2*n+3);
    vector<pair<int,int>>range(n);
    for(auto &[l,r]:range) 
    {
        cin>>l>>r;
        
        if(r-l==0) single[l]++;
    }

    for(int i=0; i<single.size(); i++)
    {
        presingle[i]=(single[i]>0);
    }
    for(int i=1; i<presingle.size(); i++)
    {
        presingle[i]+=presingle[i-1];
    }

    for(auto &[l,r]:range)
    {
        if(r-l==0)
        {
            if(single[l]==1) cout<<1;
            else cout<<0;
        }
        else
        {
            if(presingle[r]-presingle[l-1]==r-l+1) cout<<0;
            else cout<<1;
        }
    }
    cout<<'\n';
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    arafat();
}
    return 0;
}