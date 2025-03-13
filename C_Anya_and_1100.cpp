//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;


bool okey(string &str,int &i)
{
    int n=str.size();
    if(str[i]=='0')
    {
        if(i-1>=0 and str[i-1]=='0')
        {
            if(i-3>=0 and str[i-2]=='1' and str[i-3]=='1') return true;
        }
        if(i+1<n and str[i+1]=='0')
        {
           
           if(i-2>=0 and str[i-1]=='1' and str[i-2]=='1') return true;
        
        }
    }
    else
    {
        if(i-1>=0 and str[i-1]=='1')
        {
            if(i+2<n and str[i+1]=='0' and str[i+2]=='0') return true;
        }
        if(i+1<n and str[i+1]=='1')
        {
            if(i+3<n and str[i+2]=='0' and str[i+3]=='0') return true;
        }
    }
    return false;
}

void solve()
{
    string str;
    cin>>str;
    int n,q;
    cin>>q;
    n=str.size();
    int cnt=0;
    for(int i=0; i<n-3; i++)
    {
        if(str[i]=='1' and str[i+1]=='1' and str[i+2]=='0' and str[i+3]=='0') cnt++;
    }
    while(q--)
    {
        int idx,value;
        cin>>idx>>value;
        idx--;
        if(okey(str,idx)) cnt--;
        str[idx]=value+'0';
        if(okey(str,idx)) cnt++;

        if(cnt)
        {
            cout<<"YES\n";
            
        }
        else cout<<"NO\n";
        

    }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}