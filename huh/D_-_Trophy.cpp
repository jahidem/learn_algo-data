#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);// freopen("inp", "r", stdin);
ll T = 1; // cin>>T;
for (ll _t = 1; _t <= T; _t++){
  ll n,x;cin>>n>>x;
  ll nw = x,sm=0,mn = -1;
  vector<pair<ll,ll>> ls(n); 
  for(auto &x:ls){
    cin>>x.first>>x.second;
    sm+=x.first;
    if(mn==-1) mn = sm+nw*x.second;
    else mn = min(mn,sm+nw*x.second);
    sm+=x.second;
  nw--;}
  cout<<mn;
}}