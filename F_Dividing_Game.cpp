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
const int N=2e5+2;
bool isPrime[N+10];

void seive()
{
    for(int i=2; i*i<=N; i++)
    {
        if(!isPrime[i])
        {
            for(int j=i*2; j<=N; j+=i) isPrime[j]=1;
        }
    }
}



void solve()
{
    int n;
    cin>>n; 
    vector<int>v(n); for(auto &it:v) cin>>it;
    int twos=0;
    for(auto &x:v)
    {
        if(isPrime[x])
        {
            twos++;
        }
      
    }
    int total=n;
    bool anna=true;
    while(twos)
    {
        if(anna)
        {
           
            if(total&1==0) total--;
            anna=false;
        }
        else
        {
            
            if(total&1) total--;
            anna=true;
        }
        twos--;

    }
    if(anna)
    {
        if(total&1)
        {
            cout<<"Anna\n";
            return;
        }
        cout<<"Bruno\n";
        return;
    }
    else
    {
        if(total&1)
        {
            cout<<"Bruno\n";
            return;
        }
        cout<<"Anna\n";
        return;
    }
    

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;

seive();
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}