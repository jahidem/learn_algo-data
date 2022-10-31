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
    ll n,sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    vector<vector<ll>> ls(n,vector<ll> (3));
    for(auto &x:ls){
      for(ll &y:x)
        cin>>y;
    }
    vector<int> vis(n,0);
    for(int str=0;str<n;str++){
      if(ls[str][2]*ls[str][2]
          == (ls[str][0]-sx)*(ls[str][0]-sx)
          +(ls[str][1]-sy)*(ls[str][1]-sy)
        && !vis[str])
        {
          vis[str] = 1;
          queue<int> Q;
          Q.push(str);
          while(!Q.empty()){
            int nw = Q.front();
            Q.pop();
            for(int v=0;v<n;v++){
              if(!vis[v] && 
              (
                (ls[nw][1]-ls[v][1])*(ls[nw][1]-ls[v][1])
                +(ls[nw][0]-ls[v][0]) * (ls[nw][0]-ls[v][0])
              )
              < ls[nw][2] * ls[nw][2])
                Q.push(v),vis[v]=1;
            }
          }
        }
    }

  int f=0;
   for(int str=0;str<n;str++)
      if(ls[str][2]*ls[str][2]
          == (ls[str][0]-tx)*(ls[str][0]-tx)
          +(ls[str][1]-ty)*(ls[str][1]-ty)
        && vis[str])
        f=1;
  cout<<(f? "Yes":"No");
  }
}
