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
const int N=500;


bool isPrime[N+2];
void calculation()
{
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2; i*i<=N; i++)
    {
        if(!isPrime[i])
        {
            for(int j=i*2; j<=N; j+=i)
            {
                isPrime[j]=1;
            }
        }
    }
}
bool checking(int a, int b)
{
    return isPrime[a+b];
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
  bool one=false;
    vector<int>idx_odd,idx_even;
    for(int i=0; i<n; i++)
    {
     
        if(v[i]&1)
        {
            if(v[i]==1 and !one)
            {
                 idx_odd.push_back(i+1);
                 one=true;
            }
            else if(v[i]!=1) idx_odd.push_back(i+1);
               
        } 
        else
        {
            idx_even.push_back(i+1);
        }
    }

   
   

   

    if(idx_odd.size()>1)
    {
        int m=idx_odd.size();
        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                if(checking(v[idx_odd[i]-1],v[idx_odd[j]-1]))
                {
                    cout<<idx_odd[i]<<" "<<idx_odd[j]<<endl;
                    return;
                }

            }
        }

    }

    if(idx_even.size()>1)
    {
        int m=idx_even.size();
        for(int i=0; i<m-1; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                if(checking(v[idx_even[i]-1],v[idx_even[j]-1]))
                {
                    cout<<idx_even[i]<<" "<<idx_even[j]<<endl;
                    return;
                }

            }
        }

    }
    for(int i=0; i<idx_odd.size(); i++)
    {
        for(int j=0; j<idx_even.size(); j++)
        {
            if(checking(v[idx_odd[i]-1],v[idx_even[j]-1]))
                {
                    cout<<idx_odd[i]<<" "<<idx_even[j]<<endl;
                    return;
                }
        }
    }
    cout<<-1<<endl;
    return;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
calculation();
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}