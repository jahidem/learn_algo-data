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
    int n,m;cin>>n>>m;
    int f=0,an=0;
    char ls[n][m];
    for(auto &x:ls)
      for(char &y:x) cin>>y;
    for(int u=0;u<n;u++){
      for(int v=0;v<m;v++){
        if(v && ls[u][v]==ls[u][v-1] && ls[u][v]=='0')
          f=2;
        if(u && ls[u-1][v]==ls[u][v] && ls[u][v]=='0')
          f=2;

        if(v<m-1 && u<n-1 && ls[u+1][v]==ls[u][v+1] && ls[u+1][v]=='0')
          f=2;
        if(v && u<n-1 && ls[u+1][v]==ls[u][v-1] && ls[u+1][v]=='0')
          f=2;
         
        if(v<m-1 && u && ls[u-1][v]==ls[u][v+1] && ls[u-1][v]=='0')
          f=2;
        if(v && u && ls[u-1][v]==ls[u][v-1] && ls[u-1][v]=='0')
          f=2;

        if(!f&& ls[u][v]=='0')
          f=1;
      an+=(ls[u][v]=='1');}
    }
    an -= (2-f);
    cout<<an<<"\n";
  }
}
