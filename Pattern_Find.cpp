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
const int N=1e5;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pI(n);
    for (int i = 1; i < n; i++) {
        int j = pI[i-1];
        while (j > 0 && s[i] != s[j])
            j = pI[j-1];
        if (s[i] == s[j])
            j++;
        pI[i] = j;
    }
    return pI;
}


void solve()
{
    string str,tem;
    cin>>str>>tem;
    tem.push_back('#');
    vector<int>v=prefix_function(tem+str);
    bool ok=false;
    vector<int>ans;
    int m=tem.size()-1;
    int i=str.size()+m;
    //printv(v);
    for(; i>=0; i--)
    {
      //  cout<<"asce\n";
        if(v[i]==m)
        {
            ok=true;
        }
        if(ok and v[i]==1)
        {
            int dd=i-m;
            ans.push_back(dd);
            ok=false;
        }
    }
    rev(ans);
    if(ans.size()==0)
    {
        cout<<"Not Found\n";
        cout<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    printv(ans);
    cout<<endl;

   
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}