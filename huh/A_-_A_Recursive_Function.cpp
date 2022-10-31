#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int ff(int n){
  if(!n)
    return 1;
  else return n*ff(n-1);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    cout<<ff(n);
  }
}
