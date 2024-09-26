//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
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
    int n,m;
    cin>>n>>m;
    char initial[n][m],final[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>initial[i][j];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>final[i][j];
    }
    int arr[n][m];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m;j++)
        {
            int dif=(final[i][j]-'0')-(initial[i][j]-'0');
            if(dif<0) dif+=3;
            arr[i][j]=dif;
          
        }
    }
  
   for(int j=0; j<m; j++)
   {
    int cnt=0;
    int num=0;
    for(int i=0; i<n; i++)
    {
        cnt+=arr[i][j];
        if(arr[i][j]>0) num++;
    }
      if((!(cnt&1) and cnt!=0) or num==1)
      {
        cout<<"NO\n";
        return;
      }
   }
   for(int i=0; i<n; i++)
   {
    int cnt=0;
       int num=0;
    for(int j=0; j<m; j++)
    {
        cnt+=arr[i][j];
          if(arr[i][j]>0) num++;
    }

     if((!(cnt&1) and cnt!=0) or num==1)
      {
        cout<<"NO\n";
        return;
      }

   }
   cout<<"YES\n";
   return;
    

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}