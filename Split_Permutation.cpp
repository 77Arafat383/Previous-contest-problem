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




void solve()
{
    int n;
    cin>>n;
    vector<int>ans;
    int i=1;
    int dd=n;
    if(dd%2==0) dd++;
     map<int,bool>track;
     while(ans.size()<n and i<=n)
    {
        int tem=dd-i;
        if(track[i])
        {
            i++;
            continue;
        }
        ans.push_back(i);
        if(tem!=0) ans.push_back(tem);
        track[i]=1;
        track[tem]=1;
        i++;


    }
    printv(ans);
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}