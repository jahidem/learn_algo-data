#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    map<int,pair<int,int>> mp;
    while(n--){
      int t,x,a;
      cin>>t>>x>>a;
      mp[t]= {x,a};
    }
    ll dp[100001][5],mx=0;
    for(int u=1;u<5;u++)
      dp[0][u] = -1e18;
    for(int u=1;u<=100000;u++){
      for(int v=0;v<5;v++){
        ll whch = dp[u-1][v];
        if(v!=4) whch = max(whch , dp[u-1][v+1]);
        if(v!=0) whch = max(whch , dp[u-1][v-1]);
        dp[u][v] = whch;

        auto it = mp.find(u);
        if(it!=mp.end() && it->second.first ==v)
          dp[u][v] += it->second.second;
        mx = max(mx,dp[u][v]);
      }
    }
    cout<<mx;
  }
}
