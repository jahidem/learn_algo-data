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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> ls(n);
    for(ll &x:ls)
      cin>>x;
    ll dp[200001][3];
    dp[0][0]=l;
    dp[0][1]=ls[0];
    dp[0][2]=r;
    for(int u=1;u<=n;u++){
      for(int v=0;v<3;v++){
        dp[u][v] = dp[u-1][v];
        for(int w=0;w<=v;w++){
          dp[u][v]=min(dp[u][v],dp[u-1][w]);
        }
        if(v==1) dp[u][v]+= ls[u-1];
        else if(v==2) dp[u][v] += r;
        else dp[u][v]+= l;
      }
    }
  cout<<min({dp[n][0],dp[n][1],dp[n][2]});
  }
}
