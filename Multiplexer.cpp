//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
const int N=1e5;




void solve()
{
    int N;
    long long X;
    cin >> N >> X;
    vector<ll> A(N);
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    unordered_map<ll,int> freq;
    unordered_map<ll, vector<int>> pos;
    freq.reserve(N * 2);
    pos.reserve(N * 2);
    for (int i = 0; i < N; i++){
        freq[A[i]]++;
        pos[A[i]].push_back(i);
    }

    int ans = 0;
    for (auto &p : freq){
        ans = max(ans, p.second);
    }

    if(X == 1){
        cout << ans << "\n";
       return;
    }

    for (auto &entry : pos){
        ll v = entry.first;
        ll Y = v * X;
        int origY = 0;
        if(freq.find(Y) != freq.end()){
            origY = freq[Y];
        }

        vector<pair<int,int>> merged;
        merged.reserve(entry.second.size() + (pos.count(Y) ? pos[Y].size() : 0));

        for (int idx : entry.second){
            merged.push_back({idx, 1});
        }
        if(pos.find(Y) != pos.end()){
            for (int idx : pos[Y]){
                merged.push_back({idx, -1});
            }
        }

        sort(merged.begin(), merged.end(), [](auto &a, auto &b){
            return a.first < b.first;
        });

        int bestSum = INT_MIN, currentSum = 0;
        for (auto &p : merged){
            currentSum = max((int)p.second, currentSum + p.second);
            bestSum = max(bestSum, currentSum);
        }
        if(bestSum < 0) bestSum = 0;

        ans = max(ans, origY + bestSum);
    }

    cout << ans << "\n";
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}