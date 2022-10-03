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
    ll n;cin>>n;
    ll tm=n,cn=0;
    while(tm)
      cn+=(tm&1),tm/=2;
    set<ll> ans;
    for(int u=0;u<(1<<cn);u++){
      tm=n;
      ll gen=0,du=1,uu=u;
      while(tm){
        if(tm&1){
          if(uu&1)
            gen+=du;
          uu/=2;
        }
        tm/=2,du*=2;
      }
      ans.insert(gen);
    }


    for(auto x:ans)
      cout<<x<<"\n";
  }
}
