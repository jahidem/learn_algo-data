#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  ll n,q;cin>>n>>q;
  vector<ll> ls(n),la(n+1,0);
  for(ll &x:ls) cin>>x;
  sort(ls.begin(),ls.end());
  while(q--){
    ll a,b;
    cin>>a>>b;
    la[a-1]++,la[b]--;
  }ll sm=0;
  for(ll &x:la)
    sm+=x,x=sm;
  sort(la.begin(),la.begin()+n);
  sm=0;
  for(ll u=0;u<n;u++)
    sm+=ls[u]*la[u];
  cout<<sm<<"\n";  
}}