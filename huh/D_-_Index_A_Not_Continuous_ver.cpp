#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,m;
ll dp[2001][2001];
vector<ll> ls;

ll dpx(ll indx, ll u){
  if(u>m)
    return 0;
  else if(indx==n)
    return -1e12;
   
  else if(dp[indx][u]!=0)
    return dp[indx][u];
  
  return dp[indx][u] = max(
      dpx(indx+1,u),
      ls[indx]*u+dpx(indx+1,u+1)
      );
  
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n>>m;
    ls = vector<ll> (n);
    for(ll &x:ls)
      cin>>x;
    memset(dp,0,sizeof(dp));
    cout<<dpx(0,1);
  }
}
