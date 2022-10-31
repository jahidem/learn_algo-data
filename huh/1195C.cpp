#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
vector<vector<int>> res;
ll oboe[100001][2];

ll oboex(int indx,int who){
  if(indx == n)
    return 0;
  else if(oboe[indx][who]!=-1)
    return oboe[indx][who];
  
  ll ret =max({
      oboex(indx+1,who),
      oboex(indx+1,!who)+res[indx][who]});
  return oboe[indx][who] = ret;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n;
    res = vector<vector<int>> (n,vector<int>(2));
    for(auto &x:res)
      cin>>x[0];
    for(auto &x:res)
      cin>>x[1];
      memset(oboe,-1,sizeof(oboe));
      ll mx=0;
      for(int u=0;u<n;u++)
        mx = max({mx,oboex(u,1),oboex(u,0)});
      cout<<mx;
  }
}
