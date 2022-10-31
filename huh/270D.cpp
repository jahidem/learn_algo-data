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
    int n,m;cin>>n>>m;
    vector<int> ls(n);
    for(int &x:ls){
      cin>>x;
      float a;cin>>a;
    }
    int dp[n+1][m+1];
    for(int u=1;u<=m;u++)
      dp[0][u] = 0;
      
    for(int u=1;u<=n;u++){
      for(int v=1;v<=m;v++){
        dp[u][v] = dp[u-1][v] + (ls[u-1]!=v);
        if(ls[u-1]<v)
          dp[u][v] = min(dp[u][v],dp[u-1][ls[u-1]]);
      }
    }
    int ans = 1e9;
    for(int v=1;v<=m;v++)
      ans = min(ans,dp[n][v]);
    cout<<ans;
  }
}
