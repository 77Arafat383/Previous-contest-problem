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


int query(int a, int b) {
    cout << "? " << a << " " << b << endl;
    int p;
    cin >> p;
    return p;
}
 
void solve() {
 
    int n;
    cin >> n;
 
    vector<pair<int, int> > v;
 
    for (int i = 2 ; i<=n ; i++) {
        int root = 1;
        while(1) {
            int p = query(i, root);
            if(p==i) {
                v.push_back({p, root});
                break;
            }
            root = p;
        }
    }
 
    cout << "! ";
    for (auto &[i,j]:v)
        cout << i << " " << j << " ";
    cout << endl;
 
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