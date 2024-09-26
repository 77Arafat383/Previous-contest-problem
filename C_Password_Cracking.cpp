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
vector<string>hell;

bool not_curse(string str)
{
      for(auto &it:hell)
      {
          if(str.find(it)!=string:: npos)
          {
            return 0;
          }
      }
      return 1;
}
bool is_okey(string str)
{
    if(not_curse(str))
    {
        int reply;
        cout<<"? "<<str<<endl;
        cin>>reply;
        return reply;

    }
    return false;
}


void solve()
{
    int n;
    cin>>n;

   
    string s="";
    while(s.size()<n)
    {
        if(is_okey(s+'0'))
        {
            s=s+'0';
            continue;
        }
        else
        {
            hell.push_back(s+'0');

        }
        if(is_okey(s+'1'))
        {
           s=s+'1';
            continue;
        }
        else
        {
            hell.push_back(s+'1');
        }
        if(is_okey('1'+s))
        {
            s='1'+s;
            continue;
        }
        else
        {
            hell.push_back('1'+s);
            s='0'+s;
        }
    }
    cout<<"! ";
    cout<<s<<endl;
    fflush(stdout);
    hell.clear();
}


signed main()
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