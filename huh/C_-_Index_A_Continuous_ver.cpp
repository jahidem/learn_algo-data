#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n,m,u=1;
    cin>>n>>m;
    vector<ll> ls(n),sm(n+1,0),sm2(n+1,0);
    ll mx = -1e18;
    for(ll &x:ls)
      cin>>x,sm[u]+=x*u+sm[u-1],sm2[u]+=x+sm2[u-1],u++;
    for(int u=0;u+m<=n;u++){
      mx = max(mx,sm[m+u]-sm[u] - (sm2[m+u]-sm2[u])*(u));
    }
    cout<<mx;
  }
}
