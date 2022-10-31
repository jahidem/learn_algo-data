#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll md = 1000000007;
int n;
ll oboe[10000001][2];
ll oboex(int nw, int pnt){
  if(nw==n){
    if(pnt==3)
      return 1;
    return 0;
  }

  if(oboe[nw][pnt]!=-1)
    return oboe[nw][pnt];
  
  ll sm =0;
  sm+= oboex(nw+1,!pnt);
  sm %= md;
  if(!pnt){
    sm+= oboex(nw+1,0);
    sm %= md;
  }
  return oboe[nw][pnt] = sm;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;//  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n;
    memset(oboe,-1,sizeof(oboe));
    cout<<oboex(0,1);

  }
}
