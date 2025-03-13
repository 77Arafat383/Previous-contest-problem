#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int,int>>
#define vll vector<pair<ll,ll>>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vvii vector<vector<pair<int,int>>>
#define vvll vector<vector<pair<ll,ll>>>
#define vst vector<string>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define mkunique(x) sort(all(x));(x).erase(unique(all(x)),(x).end())
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
const int mod=998244353,MAX=300005,INF=15<<26;

ll gutyoku(ll x,ll M){
    ll res=0;
    for(ll y=1;y<=M;y++){
        ll z=x^y;
        if(z%x==0||z%y==0) res++;
    }
    return res;
}

ll f(ll x,ll M,ll S,ll t){
    ll res=0;
    if(t==-1){
        if((S^x)%x==0) return 1;
        else return 0;
    }
    if(M&(1LL<<t)){
        ll L=S^x;
        L>>=t;
        L<<=t;
        ll R=L+(1LL<<t)-1;
        //cout<<x<<" "<<M<<" "<<S<<" "<<t<<" "<<L<<" "<<R<<" ";
        res+=R/x+1;
        if(L>=1) res-=(L-1)/x+1;
        //cout<<res<<endl;
        res+=f(x,M,S|(1LL<<t),t-1);
        return res;
    }else{
        res+=f(x,M,S,t-1);
        return res;
    }
}

ll solve(ll x,ll M){
    ll res=0;
    res+=f(x,M,0,60);
    res--;
    for(ll y=1;y<=min(M,4*x);y++){
        ll z=x^y;
        if(z%x==0){
            
        }else{
            if(z%y==0) res++;
        }
    }
    return res;
}

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int Q;cin>>Q;
    while(Q--){
        ll X,M;cin>>X>>M;
        cout<<solve(X,M)<<"\n";
    }
}


