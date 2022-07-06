#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for (ll _t = 1; _t <= T; _t++)
  { ll n;cin>>n;
    if(n&1) cout<<-1<<"\n";
    else cout<<n/2<<" 0 0\n";
  }
}