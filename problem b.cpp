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
    int n,k;
    cin>>n>>k;
    map<char,int>mp;
    set<char>s;
    string str;
    cin>>str;
    for(auto &it:str) s.insert(it), mp[it]++;
   
    vector<char>imp;
    ll ans=LLONG_MAX;
    for(auto &it:s)
    {
        
        bool ok=true;
     
        for(auto &cd:s)
        {
            

            if(it==cd) continue;
            int dd=0;
            if(it>cd)
            {
                dd=it-cd;
            }
            else
            {
                
                dd=cd-it;
                dd=26-dd;
            }
            if(dd<k) dd+=26;
           // cout<<dd<<" ";
           
            if(dd%k!=0)
            {
                ok=false;
                break;
            }
        }
        //cout<<endl;
        if(ok)
        {
          imp.push_back(it);

        }

    }
    if(imp.size()==0)
    {
        cout<<"-1\n"<<endl;
        return;
    }
    for(auto &it:imp)
    {
        ll tem=0;
        for(auto &[cd,pd]:mp)
        {
             if(it==cd) continue;
            int dd=0;
            if(it>cd)
            {
                dd=it-cd;
            }
            else
            {
                
                dd=cd-it;
                dd=26-dd;
            }
            if(dd<k) dd+=26;
           // cout<<dd<<" ";
           
           tem+=(dd/k)*pd;
            

        }
        ans=min(ans,tem);
    }
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}