#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;//  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int an=0,n;cin>>n;
    map<int,int> mp;
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x;
    for(int x:ls){
      int tm=x,mx=0;
      vector<int> la;
      for(int u=2;u*u<=x;u++){
        if(tm%u==0){
          mx=max(mx,mp[u]),
          la.push_back(u);
          while(tm%u==0)
            tm/=u;
        }
      }
      if(tm!=1)
        mx=max(mx,mp[tm]),la.push_back(tm);
      mx++;an=max(an,mx);
      for(int xx:la){
        mp[xx]=mx;
      }
      
    }
    cout<<an;
  }
}
