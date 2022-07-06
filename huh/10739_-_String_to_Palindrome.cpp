#include<bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
ll dp[1001][1001];
ll dpx(int sta,int en){
  if(sta>en)
    return 0;
  else if(dp[sta][en]!=-1)
    return dp[sta][en];
  ll cal =1e7;
  if(s[sta]==s[en])
    cal = dpx(sta+1,en-1);
  else{
    cal = min(cal, dpx(sta+1,en-1) + 1);
    cal = min(cal, dpx(sta,en-1) + 1);
    cal = min(cal, dpx(sta+1,en) + 1);

  } 
  return dp[sta][en] = cal;

}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	cin>>T;
for(ll _t=1;_t<=T;_t++){
  cin>>s;
  memset(dp,-1,sizeof(dp));
  cout<<"Case "<<_t<<": "<<dpx(0,int(s.size())-1)<<"\n";
}}