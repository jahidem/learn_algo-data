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
    ll n,c;cin>>n>>c;
    vector<int> state(33,0),mp(33,0);

    ll x=c;
    while(n--){
      ll t,a;cin>>t>>a;
      if(t==1){
        int u=0;
        while(u<33){
          if(!(a&1))
            state[u]=t,mp[u]=0;
          a/=2,u++;
        }
      }
      else if(t==2){
        int u=0;
        while(a){
          if((a&1))
            state[u]=t,mp[u]=0;
          a/=2,u++;
        }
      }
      else {
       int u=0;
        while(a){
            if(a&1)state[u]=t,mp[u]+=1;
          a/=2,u++;
        }
      }

      ll ans = 0, du=1,u=0;

      while(u<33){
        if(state[u]==1)
          ans+=0;
        else if(state[u]==2)
         ans+=du;
        else if(state[u]==3){

          if(x&1 && mp[u]%2==0)
            ans+=du;
          else if(x%2==0 && mp[u]&1)
            ans+=du;
       
        }
        else if(x&1)
          ans+=du;

        du*=2,u++,x/=2;
      }
      cout<<ans<<"\n";
      x = ans;
    }
  }
}
