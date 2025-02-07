//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

vector<int> f(string &str, int &n)
{
    vector<int>ans(n);
    stack<int>s,pos;
    for(int i=0; i<n; i++)
    {
        if(s.empty()) 
        {
            s.push(str[i]);
            pos.push(i);
        }
        else if(s.top()!=str[i] and s.top()=='(')
        {
            ans[i]=1;
            ans[pos.top()]=1;
            pos.pop();
            s.pop();
        }
        else
        {
            s.push(str[i]);
            pos.push(i);
        }
    
    }
    return ans;
}

int color(vector<int>&ans)
{
     int n=ans.size();
     map<int,int>mp;
     for(int i=0; i<n; i++)
     {
 
         if(ans[i]!=1) 
         {
             ans[i]=2;
            
         }
         mp[ans[i]]++;
     }

     if(mp.size()==1)
    {
        for(int i=0; i<n; i++) ans[i]=1;
    }
    return mp.size();
}
void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n&1)
    {
        cout<<"-1\n";
        return;
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]==')') cnt++;
    }
    if(cnt*2!=n)
    {
        cout<<-1<<en;
        return;
    }
    
    vector<int>ans=f(str,n);
    int col1=color(ans);
    rev(str);
    vector<int>ans2=f(str,n);
    int col2=color(ans2);
    if(col1<=col2)
    {
        cout<<col1<<en;
        printv(ans);
        return;
    }
    cout<<col2<<en;
    printv(ans2);


     
    // for(int i=0; i<n; i++) cout<<ans[i]<<' '; cout<<en;
    //  int item=2;
    // while(!s.empty())
    // {
    //     stack<int>ss,pp;
    //     while(!s.empty())
    //     {
    //         if(ss.empty())
    //         {
    //             ss.push(s.top());
    //             pp.push(pos.top());
    //             s.pop();
    //             pos.pop();
    //         }
    //         else if(s.top()!=ss.top() and s.top()=='(')
    //         {
    //             ans[pos.top()]=item;
    //             ans[pp.top()]=item;
    //             pos.pop();
    //             pp.pop();
    //             ss.pop();
    //         }
    //         else
    //         {
    //             ss.push(s.top());
    //             pp.push(pos.top());
    //             s.pop();
    //             pos.pop();
    //         }
    //     }
    //     s=ss;
    //     pos=pp;
    //     item++;

    // }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}