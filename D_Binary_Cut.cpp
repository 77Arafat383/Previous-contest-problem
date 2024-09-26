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
    int cnt=0;
    char pv='2';
    for(int i=0; i<str.size(); i++)
    {
        if(pv!=str[i]) 
        {
            cnt++;
            pv=str[i];
        }
    }
    for(int i=1; i<str.size(); i++)
    {
        if(str[i-1]=='0' and str[i]=='1')
        {
            cnt--;
            break;
        }
    }
    cout<<cnt<<endl;
    

}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}