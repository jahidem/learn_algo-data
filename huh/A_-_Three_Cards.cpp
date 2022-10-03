#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool comp(const pair<int,string> &a,
              const pair<int,string> &b)
{
    if(a.first == b.first)
      return (a.second > b.second);
    return a.first > b.first;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for(int tt=1;tt<=T;tt++){ 
    int n;cin>>n;
    vector<vector<string>> ls(8);
    vector<string> la;
    for(auto &x:ls){
      string s;cin>>s;
      ls[s.size()].push_back(s);
    }
    for(int v=7;v>0;v--){
      auto &x=ls[v];
      sort(x.rbegin(),x.rend());
      for(auto y:x) la.push_back(y);
    }
    cout<<la[0]+la[1]+la[2];
  }
}
