#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  {
    int n,m;cin>>n>>m;
    int ls[n][m]={};
    int nw;
    for(int u=0;u<n;u+=2){
      nw=u%2;
      for(int v=0;v<m;v+=2){
        if(nw){
          ls[u+1][v+1]=ls[u][v]=1;
        }
        else ls[u][v+1]=ls[u+1][v]=1;
      nw++,nw%=2;}
    }
  for(int u=0;u<n;u++){
      for(int v=0;v<m;v++){
        cout<<ls[u][v]<<" ";
    }cout<<"\n";}
  }
}
