#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    ll n,m;cin>>n>>m;
    vector<ll> ls(n);
    for(ll &x:ls)
      cin>>x;
    ll k;cin>>k;
    vector<ll> la(k);
    for(ll &x:la)
      cin>>x;
    ll cnt=0,wh=0,u=0,v=0;
    while(u<ls.size() && v<la.size()){
      if(cnt){
        if(u<ls.size() && (ls[u]%wh==0) && ((ls[u]/wh)==m))
      }
      
    }
  }
}
