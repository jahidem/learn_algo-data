#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
vector<ll> ls;
vector<vector<ll>> dp;
ll dpx(int st,int en){
  if(en-st<2) return 0;
  if(dp[st][en]!=-1)
    return dp[st][en];
  ll cal = 1e17;
  for(int u=st+1;u<en;u++)
    cal = 
      min(cal,dpx(st,u)+dpx(u,en)+ls[en]-ls[st]);
  return dp[st][en] = cal;
}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);ll _T=1;//cin>>_T;
for(ll _t=1;_t<=_T;_t++){
  int l;cin>>l;
  while(l){
    int n;cin>>n;
    ls = vector<ll> (n+1,0);
    dp = vector<vector<ll>> (n+5,vector<ll> (n+5,-1));
    for(int x=1;x<=n;x++)
      cin>>ls[x];
    ls.push_back(l);
    cout<<"The minimum cutting is "<<dpx(0,n+1)<<".\n";
  cin>>l;}
}}
