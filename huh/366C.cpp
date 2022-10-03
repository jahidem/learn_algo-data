#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> ls,tas;
ll dp[101][100001][2],n;
ll go(ll indx,ll sm,ll sig){
  if(indx==n)
    return 0;
  else if(dp[indx][sm][sig]!=-1)
    return dp[indx][sm][sig];
  ll cal = sm * (sig? -1 : 1);
  cal += ls[indx];
  ll an=0;
  if(!cal) 
    an=tas[indx];
  if(go(indx+1,abs(cal),cal<0))
    an=max(an,go(indx+1,abs(cal),cal<0)+tas[indx]);
  if(go(indx+1,sm,sig))
    an=max(an,go(indx+1,sm,sig));
  //cout<<an<<"\n";
  return dp[indx][sm][sig] = an;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    ll k;cin>>n>>k;
    ls = vector<ll> (n);
    tas = vector<ll> (n);
    for(ll &x:tas)
      cin>>x;
    ll u=0;
    for(ll &x:ls){
      ll a;cin>>a;
      x=k*a-tas[u];
    u++;}
    memset(dp,-1,sizeof(dp));
    go(0,0,0);

    cout<<(dp[0][0][0]? dp[0][0][0] : -1);
  }
}
