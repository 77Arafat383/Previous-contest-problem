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
   int n=str.size();
   int i=n-2;
   while(i>=0)
   {
    if(str[i]<str[i+1])
    {
        break;
    }

    i--;
   }
   if(i<0)
   {
    cout<<"no answer\n";
    return;
   }
   int j=n-1;
   while(str[i]>=str[j])
   {
    j--;
   }
   swap(str[i],str[j]);
   sort(str.begin()+i+1, str.end());
   cout<<str<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}