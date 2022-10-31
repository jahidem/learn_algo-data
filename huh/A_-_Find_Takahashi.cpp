#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T = 1;//cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n;cin>>n;
    int mx=0,ind=0,u=1;
    vector<int> ls(n);
    for(int &x:ls){
      cin>>x,mx=max(x,mx);
      if(mx==x)
        ind = u;
      u++;}
    cout<<ind;
  }
}
