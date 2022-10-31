#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T = 1;//cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    ll ls[6],mod= 998244353;
    for(ll &x:ls)
      cin>>x,x%=mod;
    ls[0]*=ls[1];
    ls[0]%=mod;

    ls[0]*=ls[2];
    ls[0]%=mod;

    ls[3]*=ls[4];
    ls[3]%=mod;

    ls[3]*=ls[5];
    ls[3]%=mod;

    cout<<(ls[0]- ls[3] + mod) %mod; 

  }
}
