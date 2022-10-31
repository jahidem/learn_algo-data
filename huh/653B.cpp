#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n,q;
vector<pair<string,char>> ls;
ll oboe[7][200];

ll oboex(int sz,char ch){
  if(sz==n) return 1;
  else if(oboe[sz][ch]!=-1)
    return oboe[sz][ch];
  ll an = 0;
  for(auto x:ls){
    if(x.second==ch){
      an+=oboex(sz+1,x.first[0]);
    }
  }
  return oboe[sz][ch] = an;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    cin>>n>>q;
    ls = vector<pair<string,char>> (q);

    for(auto &x:ls){
      cin>>x.first>>x.second;
    }
    memset(oboe,-1,sizeof(oboe));
    cout<<oboex(1,'a');
  }
}
