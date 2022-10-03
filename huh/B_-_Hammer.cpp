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
    int gol,wal,ham;
    cin>>gol>>wal>>ham;
    int cost=0;
    if((gol<wal && 0< wal)||(wal<gol&&wal<0)){
      cout<<abs(gol);
      break;}
    if((wal*ham)<0){
      cout<<2*abs(ham)+abs(gol);
      break;
    }
    else if(abs(ham)<abs(wal) && (wal*ham)>0){
      cout<<abs(gol);
      break;
    }


    cout<<-1;
  }
}
