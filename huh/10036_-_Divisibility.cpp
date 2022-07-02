#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n,k;
vector<int> ls;
vector<vector<int>> dp;
int dpx(int ind,int md){
  if(ind==n)
    return (md==0);
  else if(dp[ind][md]!=-1)
    return dp[ind][md];
  int re = dpx(ind+1,(md+ls[ind])%k)
                  || dpx(ind+1,(md-ls[ind])%k);
  return dp[ind][md] =re;
}
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	cin>>T;
for(ll _t=1;_t<=T;_t++){
  cin>>n>>k;
  ls = vector<int> (n);
  dp = vector<vector<int>> (n+1,vector<int> (k+1,-1));
  for(int &x:ls) cin>>x,x%=k,x+=k,x%=k;
  cout<<(dpx(0,0)? "Divisible":"Not divisible")<<"\n";
}}