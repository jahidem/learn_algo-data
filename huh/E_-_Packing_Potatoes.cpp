#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> cum;
int n;
ll fetch(int sta,int cnt){
    ll sm =cum[min(n,sta+cnt)]-cum[sta];
    if(sta+cnt > n)
      sm += cum[(sta+cnt)%(n+1) ];

    return sm;
}
int fina(ll sta,ll tar){
  int lo=0,hi=n;
  while(hi!=lo){
    int mid = (hi+lo)/2;
    if(fetch(sta,mid) < tar)
      lo = mid+1;
    else 
      hi =mid;
  }
  return (sta + lo);
}
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);// freopen("inp", "r", stdin);
ll T = 1; // cin>>T;
for (ll _t = 1; _t <= T; _t++){
  ll q,x,sm=0;cin>>n>>q>>x;
  vector<ll> ls(n),kk,vis(n+1,0);
  cum.push_back(0);
  for(ll &x:ls)
    cin>>x,sm+=x,cum.push_back(sm);
  int nw=0;
  while(1){
    if(vis[nw])
      break;
    vis[nw]=1;
    int ne = fina(nw,x%sm);
    if(ne==nw) kk.push_back((x/sm)*n);
    else if(ne>nw)
      kk.push_back((x/sm)*n+(ne-nw));
    else  
      kk.push_back((x/sm)*n+n-(nw-ne));
  nw=ne%n;}
  while(q--){
    int nw;cin>>nw;
    cout<<kk[nw%kk.size()]<<"\n";
  }
}}