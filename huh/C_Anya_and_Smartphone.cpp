#include<bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  ll n,m,k,an=0,u=0;cin>>n>>m>>k;
  map<ll,ll> mp;
  vector<ll> ls(n);
  for(ll &x:ls) 
    cin>>x,mp[x]=u,u++;
  while(m--){
    ll nw;cin>>nw;
    an += mp[nw]/k  + 1;
    if(mp[nw]){
      ll prev = mp[nw] - 1;
      mp[nw]--,mp[ls[prev]]++;
      swap(ls[prev],ls[prev+1]);
    }
  }
  cout<<an<<"\n";
}}