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
    vector<ll> ls(n);
    for(ll &x:ls)
      cin>>x;
    const ll mod = 998244353;
    ll dp[101][101][101]={};
    for(int indx=1;indx<=n;indx++){
      for(int sz=1;sz<=indx;sz++){
        for(int md=1;md<=sz;md++){
          dp[indx][sz][md] = dp[indx-1][sz][md];
          if(sz==md && (md + ls[indx-1]) )
            dp[indx][sz][md] += dp[indx][sz-1][md];
            dp[indx][sz][md]%=mod;
        }
        
      }
    }
    ll ans=0;
    for(int sz=1;sz<=n;sz++){
      for(int md=1;md<=sz;md++)
        ans+=dp[n][sz][md];
        ans%=mod;
    }
    cout<<ans;
  }
}
