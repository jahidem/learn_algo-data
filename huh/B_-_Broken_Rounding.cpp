#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    ll n,kk;cin>>n>>kk;
    for(int k=1;k<=kk;k++){
    ll te=1,k1=k;
    while(k1--) te*=10;
    ll cei = ceil(double(n)/te)*te;
    ll flo = floor(double(n)/te)*te;
    
    if(abs(flo-n)<abs(cei-n))
      n=flo;
    else n=cei;
    }
    cout<<n;
  }
}
