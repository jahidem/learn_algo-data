#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> res;
vector<int> vis,ans;
int dfs(int nw,int y){
  vis[nw]=1;
  int pr=(nw==y);
  for(int x:res[nw]){
    if(!vis[x])
      pr|=dfs(x,y);
  }
  if(pr)
    ans.push_back(nw);
  return pr||(nw==y);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;//  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n,x,y;
    cin>>n>>x>>y;
    res = vector<vector<int>> (n+1);
    for(int u=0;u<n-1;u++){
      int a,b;cin>>a>>b;
      res[a].push_back(b);
      res[b].push_back(a);
    }
    vis= vector<int> (n+1,0);
    dfs(x,y);
    for(int u=ans.size()-1;u>=0;u--)
      cout<<ans[u]<< " ";
  }
}
