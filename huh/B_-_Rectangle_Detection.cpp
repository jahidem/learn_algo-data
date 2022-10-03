#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int a=1e9,b=0,c=1e9,d=0;
    vector<string> ls(10);
    for(auto &x:ls)
      cin>>x;
    for(int u=0;u<10;u++){
      for(int v=0;v<10;v++){
        if(ls[u][v]=='#')
          {
            a=min(a,u);
            b=max(b,u);
            c=min(c,v);
            d=max(d,v);
          }
      }
    }
  cout<<a+1<<" "<<b+1<<"\n"<<c+1<<" "<<d+1;}
}
