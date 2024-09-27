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


/*
Problem taken from Codeforces Round 969 Div 2... Problem D. 
--> worthy combination:
 001 , 100,011,110   
 --> null 101, 010,000,111
 -->? can be anithing 0 or 1... 
 Person A will try to maximize score.. 
 Person B will try to minimize score..
 A turn first.. 

 I need to count how many leaf node are worthy...? where 1 is root node.. 
 Explaining code by comments. 
*/


void solve()
{
    int n;
    cin>>n;
    vector<int>adj(n+1,0);
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u]++;   // this is to count how many leaf node are there.. 
        adj[v]++;
    }
    string str;
    cin>>str;
    int lc=0,tc=0,lc0=0,lc1=0;
    for(int i=2; i<=n; i++)
    {
        if(adj[i]==1)
        {
            if(str[i-1]=='0') lc0++;  // leaf node and 0. 
            else if(str[i-1]=='1') lc1++;  // leaf node and 1
            else lc++; // leaf node but ? 
        }
        if(str[i-1]=='?') tc++;  // all ? 
    }
    if(str[0]!='?')   
    {
        if(str[0]=='0') // ancestor 0 hole 1 er jonno score barbe.. and he will accure maximum leaf.
        {
            cout<<lc1+(lc+1)/2<<endl;  
        }
        else 
        {
            cout<<lc0+(lc+1)/2<<endl;  //ancestor 1 hole 0 er jonno score barbe. and he will accure maximum leaf.
        }
        return;
    }
    if(lc0==lc1)  //if number of determine leaf is similar.
    {
        if(tc%2==0) // if total undetermine is even.
        {
            cout<<lc0+(lc+1)/2<<endl; // then person A will be in advantage..
        }
        else
        {
            cout<<lc1+lc/2<<endl; //then person B will be in advantage. 
        }
        return;
    }
    cout<<max(lc0,lc1)+lc/2<<endl;  

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