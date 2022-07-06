#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<ll,ll>> pr;
ll dp[101][10201],n,m;
ll dpx(ll indx,ll wei){
  if(indx==n){
    if(wei<=m)
      return 0;
    else if(wei>2000 && wei<=m+200)
      return 0;
    else return -1e9;
  }
  else if(wei> m+200)
    return -1e9;
    
  else if(dp[indx][wei]!=-1)
    return dp[indx][wei];
  ll cal =  dpx(indx+1, wei);
  cal = max(cal, dpx(indx+1, wei+pr[indx].first) + pr[indx].second); 
   
  return dp[indx][wei] = cal;
}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;//	cin>>T;
for(ll _t=1;_t<=T;_t++){
  while(cin>>m>>n){
  pr = vector<pair<ll,ll>> (n);
  for(auto &x:pr) cin>>x.first>>x.second;
  memset(dp,-1,sizeof(dp));
  //sort(pr.rbegin(),pr.rend());
  cout<<dpx(0,0)<<"\n";
  }
}}