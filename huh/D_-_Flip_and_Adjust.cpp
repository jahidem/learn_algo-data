#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<pair<int,int>> pr;
int n,target, dp[101][10001];
char ans[101][10001];
int dpx(int indx,int sm){
   if(indx==n){
    return (target==sm);
   }
  else if(dp[indx][sm]!=-1)
    return dp[indx][sm];
  ans[indx][sm]='T';
  int ret = dpx(indx+1,sm+pr[indx].first);
  if(!ret){
    ans[indx][sm]='H';
    ret = dpx(indx+1,sm+pr[indx].second);}
  return dp[indx][sm] = ret;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n>>target;
    pr = vector<pair<int,int>> (n);
    for(auto &x:pr){
      cin>>x.first>>x.second;
    }
    memset(dp,-1,sizeof(dp));
    
    if(dpx(0,0))
      {int sm=0;
        cout<<"Yes\n";
        for(int u=0;u<n;u++)
          cout<<ans[u][sm],
          sm+=(ans[u][sm]=='T'? pr[u].first:pr[u].second);
          
      }
    else cout<<"No\n";
  }
}
