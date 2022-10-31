#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n;cin>>n;
    ll sm=0, mx=0;
    vector<ll> ls;
    while(n--){
      ll a,b;cin>>a>>b;
      ls.push_back(max(a,b));
      sm+= 2*(a+b);
    }
    sort(ls.begin(),ls.end());
    for(int u=0;u<ls.size()-1;u++)
      sm-= 2*ls[u];
    cout<<sm<<"\n";
    
  }
}
