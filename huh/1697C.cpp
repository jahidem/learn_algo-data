#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n;cin>>n;
    string s,t;cin>>s>>t;
    vector<pair<char,int>> ss,tt;
    for(int u=0;u<n;u++)
      if(s[u]!='b') ss.push_back({s[u],u});
    for(int u=0;u<n;u++)
      if(t[u]!='b') tt.push_back({t[u],u});
    int f=1;
    if(ss.size()!=tt.size()) f=0;
    else{
      for(int u=0;u<ss.size();u++)
        if(tt[u].first!=ss[u].first
          || (tt[u].first == 'a' && ss[u].second > tt[u].second)
          || (tt[u].first == 'c' && ss[u].second < tt[u].second))
          f=0;
    }
    cout<<(f ? "YES":"NO")<<"\n";
  }
}
