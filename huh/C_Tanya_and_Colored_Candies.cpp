#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,s,k;
ll dp[51][2002];
vector<pair<int,pair<int,int>>> pr;
ll dpx(int indx,int sm){
  if(dp[indx][sm]!=-1)
    return dp[indx][sm];
  else if(sm+pr[indx].first>=k)
    return 0;

  ll cal = 1e17;
  for(int u=indx+1;u<n;u++){
    if(pr[indx].second.second!=pr[u].second.second
      &&pr[indx].first<pr[u].first)
      cal = min(cal , abs(pr[indx].second.first-pr[u].second.first)
        + dpx(u,sm+pr[indx].first));
  }
  return dp[indx][sm] = cal;
}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  cin>>n>>s>>k;
  vector<int> ls(n);
  for(int &x:ls) cin>>x;
  string str;cin>>str;
  int u=0;
  for(int x:ls){
    pr.push_back({x,{u-s+1,str[u]-'A'}});
  u++;}
  sort(pr.begin(),pr.end());
  memset(dp,-1,sizeof(dp));
  ll an=1e17;u=0;
  for(auto x:pr){
      an = min(an,dpx(u,0)+abs(x.second.first));
  u++;}
  cout<<(an>=1e17? -1:an)<<"\n";
}}