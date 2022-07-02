#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);ll _T=1;cin>>_T;
for(ll _t=1;_t<=_T;_t++){
  int n,net=0;
  cin>>n;
  vector<ll> ls(n),dp(50005,0);
  for(ll &x:ls)
    cin>>x,net+=x;
  dp[0]=1;ll an=1e17;
  for(ll x:ls){
    for(ll u=50001;u>0;u--){
        if(u-x>=0 && dp[u-x])
          dp[u] = 1;
    }
  }
  for(ll u=0;u<50001;u++)
    if(dp[u])
      an= min(an,abs(net-2ll*u));//,cout<<u<<" ";
  cout<<an<<"\n";
}}
