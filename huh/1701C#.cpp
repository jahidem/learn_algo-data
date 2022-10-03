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
    int n,m;
    cin>>n>>m;
    vector<int> ls(m),la;
    int mp[200002]={};
    for(int &x:ls)
      cin>>x,mp[x]++;
    for(int u=1;u<=n;u++){
      if(!mp[u])
        nk++;
      else la.push_back(mp[u]);
    }
    sort(la.begin(),la.end());
    for(int u=1,v=0;u<=m && v<la.size();u++,v++){
      
    }
  }
}
