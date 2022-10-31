#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int oboe[201][201][201]={};
int go(int b,int g,int r){
  if(oboe[b][g][r])
    return oboe[b][g][r];
  
  if(b>1)
    go(b-1,g,r);
  if(g>1)
    go(b,g-1,r);
  if(r>1)
    go(b,g,r-1);
  
  if(b&&g) go(b-1,g-1,r+1);
  if(b&&r) go(b-1,g+1,r-1);
  if(r&&g) go(b+1,g-1,r-1);
  return oboe[b][g][r]=1;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int b=0,g=0,r=0;
    int n;cin>>n;
    while(n--){
      char ch;cin>>ch;
      if(ch=='B') b++;
      else if(ch=='G') g++;
      else r++;
    }
    go(b,g,r);
    if(oboe[1][0][0]) cout<<'B';
    if(oboe[0][1][0]) cout<<'G';
    if(oboe[0][0][1]) cout<<'R';
  }
}
