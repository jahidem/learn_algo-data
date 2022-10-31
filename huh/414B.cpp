#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll md = 1000000007;
int n,k;
ll oboe[2002][2002];

ll oboex(int nw,int len){
  if(len == k) return 1;
  if(oboe[nw][len]!= -1)
    return oboe[nw][len];

  ll ret = 0;
  for(int u=nw;u<=n;u+=nw)
    ret = (ret + oboex(u,len+1)) % md;
  return oboe[nw][len] = ret ;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n>>k;
    ll sm=0;
    memset(oboe,-1,sizeof(oboe));
    for(int u=1;u<=n;u++)
      sm = (sm + oboex(u,1)) % md;
     cout<<sm;
  }
}
