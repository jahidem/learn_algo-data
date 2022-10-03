#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int l1,l2,r1,r2;
    cin>>l1>>r1>>l2>>r2;
    if(l1<=l2&&l2<r1)
      cout<<min(r1,r2)-l2;
    else if(l2<=l1&&l1<r2)
       cout<<min(r2,r1)-l1;
    else cout<<0;

  }
}
