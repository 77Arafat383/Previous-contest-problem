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
    string str; cin>>str;
    vector<char>v;
    v.push_back(str[0]);
    int cnt=0;
    if(v.back()=='0') cnt++;
    for(int i=1; i<n; i++)
    {
        if(str[i]=='0')
        {
            if(v.back()!='0') 
            {
                cnt++;
                v.push_back(str[i]);
            }
        }
        else v.push_back(str[i]);

    }
    //printv(v);
    //cout<<cnt<<endl;
    if(cnt<(v.size()-cnt))
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
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}