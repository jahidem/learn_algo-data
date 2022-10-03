#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    set<ll> st,tm;
    map<ll,int> mp;
    for(int u=0;u<n;u++){
      int a;cin>>a;
      mp[a]++,st.insert(a);
    }int f=1;
    while(st.size()!=1 && f){
      tm.clear();f=0;
      for(ll x:st){
        int mn =min(mp[x],mp[x+1]);
        mp[x]-=mn,mp[x+1]-=mn;
        mp[2*x+1]+=mn;
        if(mn) tm.insert(2*x+1);
        mp[2*x]+=mp[x]/2;
        if(mp[x]/2) tm.insert(2*x);
        mp[x]-=(mp[x]/2);
        f |= (!mp[x]);
        if(mp[x]) tm.insert(x);
      }
      st=tm;
    }
    cout<<(f? "YES":"NO")<<"\n";
  }
}
