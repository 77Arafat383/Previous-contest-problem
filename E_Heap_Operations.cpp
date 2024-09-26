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




void solve()
{
    int n;
    cin>>n;
    string str;
    map<ll,int>mp;
    vector<pair<string,ll>>ans;
    set<ll>s;
    w(n)
    {
        cin>>str;
       if(str=="insert")
       {
        ll dd;
        cin>>dd;
        ans.push_back({str,dd});
        mp[dd]++;
        s.insert(dd);
       }
       else if(str=="removeMin")
       {
        
       
         auto it=s.begin();
         if(s.empty())
         {
            ans.push_back({"insert",0});
         }
         ll dd=*it;
         mp[dd]--;
         if(mp[dd]==0)
         {
            mp.erase(dd);
            s.erase(s.begin());
         }
        ans.push_back({str,LLONG_MIN});
    }
    else
    {
        ll dd;
        cin>>dd;
        auto it=s.begin();
        int val=*it;
        if(dd==val)
        {
            
           ans.push_back({str,dd});
           mp[dd]--;
           if(mp[dd]==0)
           {
            mp.erase(dd);
            s.erase(s.begin());
           }

        }
        else if(dd<val)
        {
            ans.push_back({"insert",dd});
            ans.push_back({str,dd});
            mp[dd]++;
            s.insert(dd);
        }
        else
        { 
            while(val<dd and !s.empty())
            {
                while(mp[val])
                {
                    ans.push_back({"removeMin",LLONG_MIN});
                    mp[val]--;
                }
                mp.erase(val);
                s.erase(s.begin());
                val=*s.begin();

            }
            if(val==dd)
            {
                ans.push_back({str,dd});
                
            }
            else
            {
                ans.push_back({"insert",dd});
                ans.push_back({str,dd});
                mp[dd]++;
                s.insert(dd);
            }
        }
    }
    }
    cout<<ans.size()<<endl;
    for(auto &it:ans)
    {
        cout<<it.first;
        if(it.second!=LLONG_MIN)
        {
            cout<<" "<<it.second<<endl;
        }
        else
        {
            cout<<" "<<endl;
        }
    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}