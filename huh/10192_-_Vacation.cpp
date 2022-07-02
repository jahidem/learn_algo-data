#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> dp;
string s,t;
int dpx(int u,int v){
  if(u<0||v<0)
    return 0;
  else if(dp[u][v]!=-1)
    return dp[u][v];
  int re;
  if(s[u]==t[v])
    re = dpx(u-1,v-1) + 1;
  else 
    re = max(dpx(u,v-1) , dpx(u-1,v));
  return dp[u][v] = re;
}
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  //string s,t;
  int cas=1;
  while(1){
    getline(cin,s);
    if(s[0]=='#')
      break;
    getline(cin,t);
    dp = vector<vector<int>> (101,vector<int> (101,-1));
    cout<<"Case #"<<cas++<<": you can visit at most "
      <<dpx(s.size()-1,t.size()-1)<<" cities.\n";
  }
}}