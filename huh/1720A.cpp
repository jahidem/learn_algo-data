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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll gc = __gcd(a,b);
    a/=gc,b/=gc;
    gc = __gcd(c,d);
    c/=gc,d/=gc;
    if(a==c&&b==d)
      cout<<0;
    else if(((b*c)&&(a*d)%(b*c)==0)
            ||((a*d)&&(b*c)%(a*d)==0))
      cout<<1;
    else cout<<2;
    cout<<"\n";
  }
}
