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


/*
32 1 2
60 1 3
64 1 4
92 1 5
120 2 3
128 2 4
168 1 6
184 2 5
240 3 4
336 2 6
345 3 5
368 4 5
630 3 6
672 4 6
966 5 6
*/
vector<int>value={4,8,15,16,23,42};
map<ll,pair<int,int>>product;
vector<int> finding(int i)
{
    cout.flush();
    int x;
    cout<<"? "<<i+1<<' '<<i+2<<en;
    cout.flush();
    cin>>x;
    cout.flush();
    auto &[a,b]=product[x];
    cout<<"? "<<i+2<<' '<<i+3<<en;
    cout.flush();
    cin>>x;
    auto &[c,d]=product[x];
    vector<int>ans;
    if(a==c)
    {
        ans.push_back(b);
        ans.push_back(a);
        ans.push_back(d);
        
    }
    else if(a==d)
    {
        ans.push_back(b);
        ans.push_back(a);
        ans.push_back(c);
    }
    else if(b==c)
    {
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(d);
    }
    else if(b==d)
    {
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
    }
    return ans;
}

void solve()
{
    

    for(int i=0; i<value.size()-1; i++)
    {
        for(int j=i+1; j<value.size(); j++)
        {
           product[value[i]*value[j]]={i+1,j+1};
        }
       
    }
    cout.flush();
    vector<int>ans=finding(0);
    cout.flush();
    vector<int>tem=finding(3);
    cout.flush();
    for(int i=0; i<3; i++) ans.push_back(tem[i]);
    cout<<"! ";
    for(int i=0; i<6; i++) cout<<value[ans[i]-1]<<' ';
    cout<<en;
    cout.flush();

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}