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
    string str;
    cin>>str;
    
    map<char,int>pos;
    for(int i=0; i<str.size(); i++)
    {
        pos[str[i]]=i;
    }
    if(pos.size()==1)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<int>idx;
    for(auto &it:pos)
    {
        idx.push_back(it.second);
    }
    swap(str[idx[0]],str[idx[1]]);
    cout<<str<<endl;
    
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}