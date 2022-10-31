#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n,m,mod = 998244353;
    cin>>n>>m;
    vector<int> la(n);
    for(int &x:la)
      cin>>x;
    int ls[m+1]={};
    ls[0]=1;
    for(int u=1;u<=m;u++)
      ls[u] = (ls[u-1]*u)%md;
    int sm=0,m=ls[m];
    for(int x:ls)
      sm = (sm + x)%md;
  }
}
