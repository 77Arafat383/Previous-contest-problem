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




void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n==2)
    {
        int dd=stoi(str);
        cout<<dd<<endl;
        return;
    }
    if(n==3)
    {
        if(str[0]=='0' or str[2]=='0')
        {
            cout<<0<<endl;
            return;
        }

        int ans=INT_MAX;
     for(int i=0; i<n-1; i++)
     {
        auto sb=str.substr(i,2);
        
        int tt=stoi(sb);
      //  cout<<tt<<endl;
     // cout<<i<<" ="<<tt<<endl;
        
        
        int tem=0;
        for(int j=0; j<n; j++)
        {
            if(j==i)
            {

                
                if((tt==1 and tem!=0))
                {
                   

                    
                }
                else if( tem==1)
                {
                    tem=tt;
                }
                else
                {
                    tem+=tt;
                }
                j++;
                 continue;
            }
            if(str[j]=='1' and tem!=0)
            {
                continue;

            } 
            else
            tem+=(str[j]-'0');
            

        }
        ans=min(ans,tem);
     }
    cout<<ans<<endl;
    return;
        
    }
    
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            cout<<0<<endl;
            return;
        }
    }
     int ans=INT_MAX;
     for(int i=0; i<n-1; i++)
     {
        auto sb=str.substr(i,2);
        int tt=stoi(sb);
        if(tt==1) tt=0;
        int tem=0;
        for(int j=0; j<n; j++)
        {
             if(j==i)
            {
                j++;
                if(tt==1 and tem!=0)
                {
                    

                    
                }
                else if( (tem==1))
                {
                    tem=tt;
                }
                else
                {
                    tem+=tt;
                    
                }
                continue;
            }
            if(str[j]=='1' and tem!=0) continue;
            tem+=str[j]-'0';

        }
        ans=min(ans,tem);
     }
     cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}