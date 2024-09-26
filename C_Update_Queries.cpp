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




void solve()
{
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
   set<int>idx;
    vector<char>ch(m);
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        idx.insert(x);
    }
    for(auto &it:ch) cin>>it;
    //printv(idx);
    sort(all(ch));
    int j=0;
    for(auto &it:idx)
    {
        str[it-1]=ch[j];
        j++;

    }
    cout<<str<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}