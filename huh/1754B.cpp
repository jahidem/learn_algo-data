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
    if(n&1) cout<<n<<" ";
    for(int u=n/2;u>0;u--){
      cout<<u<<" ";
      if(u+(n/2)<=n) cout<<u+n/2<<" ";}
    
    cout<<"\n";
  }
}
