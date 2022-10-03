#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<pair<int,int>,int> cell,vis;
int n;
void go(int x,int y){
  if(!cell[{x,y}] || vis[{x,y}])
    return;
  vis[{x,y}]=1;
  int hm[][2]={
    {x+1,y+1},
    {x-1,y-1},
    {x+1,y},
    {x,y+1},
    {x-1,y},
    {x,y-1}
  };
  for(auto x:hm){
    go(x[0],x[1]);
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n;
    vector<pair<int,int>> pr(n);
    for(auto &x:pr){
      cin>>x.first>>x.second;
      cell[{x.first,x.second}]=1;}
    int ans=0;
    for(auto x:pr){
      if(!vis[{x.first,x.second}])
        go(x.first,x.second),ans++;
    }
    cout<<ans;
  }
}
