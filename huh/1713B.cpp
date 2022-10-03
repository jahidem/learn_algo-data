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
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x;
    int cn=0,f=1;
    for(int u=1;u<n;u++){
      if(ls[u-1]==ls[u]) continue;
      if(f!=(ls[u-1]<ls[u]))
         cn++;
      f=ls[u-1]<ls[u];
    }
    cout<<(cn<=1? "YES":"NO")<<"\n";
    
  }
}