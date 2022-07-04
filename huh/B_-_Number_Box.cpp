#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for (ll _t = 1; _t <= T; _t++)
  {
   ll mx=0,n;cin>>n;
   vector<string> ls(n);
   for(string &x:ls)
    cin>>x;
  ll dir[8][2] = {{1,0},{0,1},{-1,0},{0,-1},
                  {1,1},{-1,-1},{1,-1},{-1,1}};
  for(int u=0;u<n;u++){
    for(int v=0;v<n;v++){
      for(auto x: dir){
        ll xe=u,ye=v,nn=n;            
        ll cal= 0,ba = 1;
        while(nn--){
          cal+=(ls[xe][ye]-'0')*ba,ba*=10;
          xe+=x[0],ye+=x[1];
          xe = (xe+n)%n,ye = (ye+n)%n;
        }
        mx = max(mx,cal);
        }
      
    }
  }
  cout<<mx;

  }
}