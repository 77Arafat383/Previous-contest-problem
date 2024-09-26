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
  int n;
  cin>>n;
  string str;
  cin>>str;
  map<char, vector<int>>mp;
  int N=0,S=0,E=0,W=0;
  mp['N'],mp['S'],mp['W'],mp['E'];
  for(int i=0; i<n; i++)
  {
    mp[str[i]].push_back(i);
    if(str[i]=='N') N++;
    else if(str[i]=='S') S++;
    else if(str[i]=='E') E++;
    else W++;
  }
  // for(auto &it:mp)
  // {
  //   cout<<it.first<<" ";
  //   for(auto &ch:it.second) cout<<ch<<" "; cout<<endl;
  // }
  if((n==2 and str[0]!=str[1]) or n<2)
  {
    cout<<"NO\n";
    return;
  }
  
  int dd=abs(S-N);
  int pp=abs(E-W);
  //cout<<pp<<" "<<dd<<endl;
  if(dd&1 or pp&1)
  {
    cout<<"NO\n";
    return;
  }
  char ch,sh;
  if(mp['N'].size()>mp['S'].size())
  {
    ch='N';
    sh='S';
  }
  else
  {
    ch='S';
    sh='N';
  }
  bool ok=true;
  for(int i=0; i<dd; i+=2)
  {
   
      str[mp[ch][i]]='H';
      str[mp[ch][i+1]]='R';

     
  }
 ok=true;
 
  for(int i=dd,j=0; i<mp[ch].size() and j<mp[sh].size(); i++,j++)
  {
    if(ok)
    {
      str[mp[ch][i]]='R';
    str[mp[sh][j]]='R';
    ok=false;

    }
    else
    {
      str[mp[ch][i]]='H';
    str[mp[sh][j]]='H';
    ok=true;
    }
    
    

  }

  if(mp['E'].size()>mp['W'].size())
  {
    ch='E';
    sh='W';
  }
  else
  {
    ch='W';
    sh='E';
  }
 ok=true;
  for(int i=0; i<pp; i+=2)
  {
   
      str[mp[ch][i]]='R';
      str[mp[ch][i+1]]='H';

     
  }
 ok=true;
  for(int i=pp,j=0; i<mp[ch].size() and j<mp[sh].size(); i++,j++)
  {
    if(ok)
    {
      str[mp[ch][i]]='H';
    str[mp[sh][j]]='H';
    ok=false;

    }
    else
    {
      str[mp[ch][i]]='R';
    str[mp[sh][j]]='R';
    ok=true;
    }
    
    

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