#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);// freopen("inp", "r", stdin);
ll T = 1; // cin>>T;
for (ll _t = 1; _t <= T; _t++){
  int n,q,sta=0;cin>>n>>q;
  string s;cin>>s;
  while(q--){
    int a,b;cin>>a>>b;
    if(a==1)
      sta = (sta+(n-b))%n;
    else 
      cout<<s[(sta+b-1) %n]<<"\n";
  }
}}