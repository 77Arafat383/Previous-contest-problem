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

int dp[MAX][2];

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int Q;cin>>Q;
    while(Q--){
        ll N,K;cin>>N>>K;   //taking input. 
        string S;cin>>S; // taking string as input
        vl A(N);  // ll type er akta vetor declare korce a name. 
        for(int i=0;i<N;i++) //seta k input hisabe niche. 
        // that means jorimana pakage niche. 
        {
            cin>>A[i];
        }
        while(si(S)&&S.back()=='R') // akdom sese R thakle seta k bad. since seta niye r matha gamano proyojon nnai. 
        {
            S.pop_back();
            A.pop_back();// tai string theke o bad and jorimana theke o bad. 
        }
        reverse(all(S)); 
        reverse(all(A));
        while(si(S)&&S.back()=='R')
        {// reverse kore same kaj samner gular jonno o korlam. 
            S.pop_back();
            A.pop_back();
        }
        reverse(all(S));
        reverse(all(A));
        
        if(si(S)==0)// jodi size already 0 hoye jay. then alhamdulillah answer is 0; 
        {
            cout<<0<<"\n";
            continue;
        }
        
        vector<pair<char,ll>> ST; // akta pair,{char, ll} name is ST
        for(int i=0;i<si(S);i++) //0 to size of string pojjontw. 
        {
            if(si(ST)==0||S[i]!=ST.back().fi)//jodi 0 or different ta hoy.
            {
                ST.pb(mp(S[i],A[i])); // oi character and tar cost. 
            }
            else
            {
                chmax(ST.back().se,A[i]);  // jodi same hoy. then oi cost and akhon er cost. 
            }
        }
        ll need=(si(ST)+1)/2-K; // need ordekta. 
        if(need<=0){
            cout<<0<<"\n";
            continue;
        }
        
        N=si(ST);
        
        ll l=-1,r=INF;
        while(r-l>1){
            ll mid=(l+r)/2;
            for(int i=0;i<=N;i++)
            {
                dp[i][0]=dp[i][1]=-INF;
            }
            dp[0][0]=0;
            for(int i=0;i<N;i++){
                if(ST[i].se<=mid){
                    chmax(dp[i+1][1],dp[i][0]+1);
                }
                chmax(dp[i+1][0],dp[i][0]);
                chmax(dp[i+1][0],dp[i][1]);
            }
            if(max(dp[N][0],dp[N][1])>=need) r=mid;
            else l=mid;
        }
        cout<<r<<"\n";
    }
}


