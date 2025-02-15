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

vector<vector<string>>pre;
void pre_computation()
{
    vector<string>one,two,three,four;
    string tem;
    for(char i='a'; i<='z'; i++)
    {
        one.push_back(tem+i);

    }
    pre.push_back(one);
    for(auto &it:one)
    {
        for(char i='a'; i<='z'; i++)
        {
            two.push_back(it+i);
        }
    }
    pre.push_back(two);
    for(auto &it:two)
    {
        for(char i='a'; i<='z'; i++)
        {
            three.push_back(it+i);
        }
    }
    pre.push_back(three);

}

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    for(auto &v:pre)
    {
        for(auto &child:v)
        {
            if(str.find(child)==string::npos)
            {
                cout<<child<<en;
                return;
            }
        }
    }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
 pre_computation();
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}