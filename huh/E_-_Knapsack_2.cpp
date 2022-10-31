#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n,W;
vector<pair<int,int>> ls;
ll dp[101][1001];

ll dpx(int indx,int val){
  if(indx==n){
    return 0;
  }
  else if(sp[indx][val]!=-1)
    return dp[indx][val]; 
  else{
    ll cal = dpx(indx+1,val);
    cal = min(cal,dpx(indx+1, val + pr[nw].second));
    return dp[indx][val]=cal;
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n>>W;
    pr = vector<pair<int,int>> (n);
    for(auto &x:ls){
      cin>>x.first>>x.second;
    }
    memset(dx,-1,sizeof(dp));
    ll mx = 
    dpx(0,0);
    for(int u=0;u<n;u++){
      for(int  v=0;v<=1000;v++){
        if(dp[u][v]!=-1 && dp[u][v] < W)
          mx = max(mx,v);
      }
    }
  }
}
