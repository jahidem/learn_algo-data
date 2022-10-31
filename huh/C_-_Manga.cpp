#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    vector<int> ls(n);
    map<ll,int> la;
    for(int &x:ls){
      cin>>x;
      if(la[x]) x=1e9;
      else la[x]=1;
    }
    sort(ls.begin(),ls.end());
    int red=1,sz=n,u=0;
    while(u<sz){
      if(ls[u]==red)
        u++,red++;
      else if(sz-1>u)
        sz-=2,red++;
      else break;
    }
    cout<<red-1;
  }
}
