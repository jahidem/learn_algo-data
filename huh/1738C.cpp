#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int oboe[101][101][2][2];
int isEven(int od,int ev,int who,int evdo){
  if(oboe[od][ev][who][evdo]!=-1)
    return oboe[od][ev][who];
  else if(!od && ev==1 )
    return ;

  int ret;
  if(!who){

      if(od)
        isEven(od-1,ev,!who);
      else if(ev) 
        isEven(od,ev-1,!who,evdo);
      
  }
  

}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int nn,n;cin>>n;
    nn=n;
    while(nn--){
        int a;cin>>a;
        sm+=(a&1);
    }
    memeset(oboe,-1,sizeof(oboe));
    cout<<(isEven(sm,n-sm,0,0)? "Alice":"Bob" )
  }
}
