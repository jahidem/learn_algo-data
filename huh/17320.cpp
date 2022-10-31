#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n,an=1e9,gc=0;cin>>n;
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x,gc=__gcd(gc,x);
    if(gc==1) cout<<0<<"\n";
    else{
    for(int v=n-1;v>=0;v--){
    for(int u=n-1;u>=0;u--){
      if(u==v && (__gcd(gc,__gcd(u+1,ls[u]))==1))
        an = min(an,n-u);
      else if(u!=v){
        if(__gcd(__gcd(gc,__gcd(ls[u],u+1)),__gcd(ls[v],v+1))==1)
           an = min(an,n-u+n-v);
      }
        
    }
    }
    cout<<an<<"\n";}
  }
}
