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
    int n;cin>>n;
    vector<int> ls(n),la(n);
    int f=1;
    for(int &x:ls)
      cin>>x;
    la=ls;
     for(int u=1;u<n;u++){

      if((la[u-1]-ls[u]>=0) && ls[u])
        f=0;
        
      if(la[u-1]-ls[u]>=0)
        la[u]=la[u-1]-ls[u];
      else
        la[u]=la[u-1]+ls[u];
      
     }
     if(f)
      for(int x:la) cout<<x<<" ";
    else cout<<-1;
    cout<<"\n";    
  }
}
