#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    vector<string> ls(n);
    for(auto &x:ls)
      cin>>x;
    int f=1;
    for(int u=0;u<n && f;u++){
      for(int v=0;v<u && f;v++){
        if(ls[u][v]=='W'&&ls[v][u]=='L')
          continue;
        else if(ls[u][v]=='L'&&ls[v][u]=='W')
          continue;
        else if(ls[u][v]=='D'&&ls[v][u]=='D')
          continue;
        else f=0;
      }
    }
    cout<<(f?"correct":"incorrect");
  }
}
