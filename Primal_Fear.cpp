//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
#define check cout<<"check\n";
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=2e6+10;
vector<int>arr(N,0);
bool f(int n)
{
    while(n)
    {
        if(n%10==0) return 0;
        n/=10;

    }
    return 1;
}
void seive()
{
    
    vector<int>prime(N,true);
    arr[2]=1;
    for(int i=3; i*i<=N; i+=2)
    {
        if(prime[i])
        {
            if(f(i)) arr[i]=1;
            for(int j=i*i; j<N; j+=i)
            {
                prime[j]=0;
            }

        }
    }
    for(int i=1; i<N; i++)
    {
        
        arr[i]+=arr[i-1];
       //if(arr[i]!=arr[i-1]) cout<<i<<" ";
        

    }
    
    cout<<endl;
}




void solve()
{
   
    int x;
    cin>>x;
    cout<<arr[x]<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
 seive();
 
int t;
cin>>t;
w(t) solve();
    return 0;
}