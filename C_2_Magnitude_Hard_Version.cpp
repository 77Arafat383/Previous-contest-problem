 //**************BISMILLAHIR RAHMANIR RAHIM****************
 #include<bits/stdc++.h>
 using namespace std;
 #define check cout<<'?'<<endl;
 #define    ll               long long
 const int M =  998244353;
 #define    all(x)           x.begin(), x.end()
 #define    w(x)             while(x--)
 #define    pi               acos(-1.00)
 #define rev(v) reverse(all(v));
 #define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
 #define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
 const int N=1e5;
 
 /*
    This logic is copied. it has written only for learning purpose. 
 */
 
 
 void solve()
 {
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    map<ll,ll>mp;
    //base case
    mp[0]=1;
    for(int i=0; i<n; i++)
    {
        map<ll,ll>tem;
        swap(tem,mp);// i-1 er value hobe tem er tar jonno i er value ber kore mp te rakhbo.
        for(auto &[x,y]:tem)
        {
            mp[x+v[i]]=(mp[x+v[i]]+y)%M;
            mp[abs(x+v[i])]=(mp[abs(x+v[i])]+y)%M;

        }
        // first & last element chara baki sob must be delete;
        auto it=mp.begin();
        it++;
        while(it!=mp.end() and next(it)!=mp.end()) it=mp.erase(it);
    }
    // last er man must be maximum. 
    cout<<mp.rbegin()->second<<endl;
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