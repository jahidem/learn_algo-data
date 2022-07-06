#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<ll,ll>> pr;
ll dp[100001][3],n;
ll dpx(ll indx,ll wei){
  if(indx>=n)
    return 0;
  ll cal = dpx(indx+1,0);
  if(wei!=)
  return dp[indx][wei] = cal;
}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;//	cin>>T;
for(ll _t=1;_t<=T;_t++){
  cin>>n;
  pr = vector<pair<ll,ll>> (n);
  for(auto &x:pr) cin>>x.first>>x.second;
  memset(dp,-1,sizeof(dp));
  
  cout<<dpx(0,0)<<"\n";
  }
}}