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
    int n,k;cin>>n>>k;
    vector<ll> ls(n,0),la(k);
    for(ll &x:la)
      cin>>x;
   {
      ll va = la[0]/(n-k+1);
      for(int u=0;u<=n-k;u++)
        ls[u] = va;
      ll lol = abs(la[0]%(n-k+1)), v =n-k;
      while(lol) ls[v]+=(la[0]<0? -1:1),lol--,v--;
    }
    int f=1;
    for(int u=1;u<k;u++)
      ls[n-k+u] = la[u] - la[u-1];
    for(int u=1;u<n;u++)
      f &= (ls[u]>=ls[u-1]);

      //for(int x:ls) cout<<x<<" ";
    cout<<(f? "Yes":"No")<<"\n";
  }
}
