#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<string> ls(9);
isval(int u,int v){
  if(u>=9 || v>=9 || u<0 || v<0)
    return false;
  if(ls[u][v]!='#')
    return false;
  return true;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T = 1;//cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int an=0;
    for(auto &x:ls)
      cin>>x;
    for(int u=0;u<9;u++){
      for(int v=0;v<9;v++){
        for(int x=0;x<9;x++){
          for(int y=0;y<9;y++){
            if(x||y){
            int xx = -y,yy = -x;
            int f= (isval(u,v) && isval(u+x,u+y) && isval(u+xx,v+yy) && isval(u+x+xx,v+y+yy));
            an+=f;
            if(f) cout<<u<<" "<<v<<"\n";}
          }
        }
        
      }
    }
    cout<<an;
  }
}
