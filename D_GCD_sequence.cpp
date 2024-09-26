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
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<int>gcd_list(n);
    for(int i=0; i<n-1; i++)
    {
        gcd_list[i]=__gcd(v[i],v[i+1]);
    }
    vector<int>pre(n),suf(n);
    pre[0]=1;
    suf[n-2]=1;
    for(int i=1; i<n; i++)
    {
        if(gcd_list[i]>=gcd_list[i-1])
            pre[i]=gcd_list[i-1];
    }

    for(int i=n-3; i>=0; i--)
    {
        if(gcd_list[i]<=gcd_list[i+1])
            suf[i]=gcd_list[i+1];
    }

    for(int i=0; i<n-1; i++)
    {
        bool ok = 1;
		int lf = INT_MIN, rt = INT_MAX;
		if (i - 2 >= 0 and pre[i - 2] == 0)
			ok = 0;
		if (i + 1 < n - 1 and suf[i + 1] == 0)
			ok = 0;
		if (i - 2 >= 0)
		{
			lf = gcd_list[i - 2];
		}
		if (i + 1 < n - 1)
		{
			rt = gcd_list[i + 1];
		}
		if (i > 0 and i < n - 1)
		{
			int m = gcd(v[i - 1], v[i + 1]);
			if (m<lf or m>rt)
				ok = 0;
		}
		if (ok)
		{
			cout << "YES" << endl;
			return;
		}
    }
    cout<<"NO\n";
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