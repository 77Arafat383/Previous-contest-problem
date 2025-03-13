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

void arafat()
{
    int n,k,m;
    cin>>n>>k>>m;
    string str,tem;
    cin>>str;
    bool ok=true;
    int j=0;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        vector<int>v(k);
        while(cnt<k and j<m)
        {
            if(!v[str[j]-'a']) cnt++;
            v[str[j]-'a']=1;
            j++;
        }
        if(cnt<k)
        {
            ok=false;
            for(int x=0; x<k; x++)
            {
                if(!v[x]) 
                {
                    char ch=x+'a';
                    tem.push_back(ch);
                    break;
                }
            }
        }
        else
        {
            tem.push_back(str[j-1]);
        }
        
    }
    if(ok)
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
        cout<<tem<<'\n';
    }
}

void solve()
{
    int n,k,m;
    cin>>n>>k>>m;
    string str,tem;
    cin>>str;
    int j=0;
    bool ok=true;
    for(int i=0; i<n; i++)
    {
        int cnt=0;
        vector<int>v(k); 
        while(cnt<k and j<m)  
        {
            cnt+=(!v[str[j]-'a']); 
            v[str[j]-'a']=1;
            j++;
        }

        if(cnt<k) 
        {
            ok=false; 
            for(int x=0; x<k;x++)
            {
                if(!v[x])
                {
                    tem+='a'+x; 
                    break;
                }
            }
        }
        else  
        { 
            tem+=str[j-1]; 
        }
    }

    if(ok)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
        cout<<tem<<'\n';

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