#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for (ll _t = 1; _t <= T; _t++)
  {
    int n,m;cin>>n>>m;
    int ls[n][m]={};
    int tn=n,tm=m;
    while(tn&&tm){
        
    tn--,tm--;}
  for(int u=0;u<n;u++){
      for(int v=0;v<m;v++){
        cout<<ls[u][v]<<" ";
    }cout<<"\n";}

  }
}