#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> ls,mp;
ll n;
ll pg[5001][5001];
ll pgx(int nw,int cnt){
  if(nw==n)
    return 0;
  else if(pg[nw][cnt]!=-1)
    return pg[nw][cnt];
  ll mx= pgx(nw+1,0),cal = pgx(nw+1,cnt+1)+ls[nw];
  if(mp[cnt+1]!=-1)
    cal +=mp[cnt+1];
  mx = max(mx,cal);

  return pg[nw][cnt] = mx;

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    ll m;cin>>n>>m;
    mp = vector<ll> (n+1,-1);
    ls = vector<ll> (n);
    for(auto &x:ls)
      cin>>x;
    
    while(m--){
      ll c,y;
      cin>>c>>y;
      mp[c]=y;
    }
    memset(pg,-1,sizeof(pg));
    cout<<pgx(0,0);
  }
}
