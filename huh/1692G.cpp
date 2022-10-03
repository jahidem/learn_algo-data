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
    int n,k,sm=0;cin>>n>>k;
    vector<int> ls(n);
    for(int &x:ls) cin>>x;
    for(int u=0;u<k;u++)
        sm+=(ls[u] <  2*ls[u+1]);
    int an = (sm==k);
    for(int u=k;u<n-1;u++){
        sm+=( -(ls[u-k]< 2*ls[u-k+1]) + (ls[u]< 2*ls[u+1]));
      an += (sm==k);
  }
    cout<<an<<"\n";
  }
}
