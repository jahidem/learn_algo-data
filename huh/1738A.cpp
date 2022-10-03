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
    int n;cin>>n;
    int sm = 0;
    ll ans=0;
    vector<pair<int,int>> pr(n);
    for(auto &x:pr)
      cin>>x.second,sm+=x.second;
    
    for(auto &x:pr)
      cin>>x.first,ans+=x.first;
    
    int ze=n-sm,mn=min(ze,sm);
    vector<int> ow,zz;
    for(auto x:pr){
      if(x.second) ow.push_back(x.first);
      else zz.push_back(x.first);
    }
    sort(zz.rbegin(),zz.rend());
    sort(ow.rbegin(),ow.rend());
    
    for(int u=0;u<mn && ((sm!=ze)||(u!=mn-1 || (zz[mn-1]>=ow[mn-1])));u++)
      ans+= zz[u];
    for(int u=0;u<mn && ((sm!=ze)||(u!=mn-1 || (zz[mn-1]<ow[mn-1])));u++)
      ans+= ow[u] ;
    cout<<ans<<"\n";

  }
}
