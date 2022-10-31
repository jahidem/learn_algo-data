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
    int n;
    cin>>n;
    vector<int> ls(n),ans(n,0);
    set<int> st;map<int,int> mp;
    for(int &x:ls)
      cin>>x,st.insert(x);
    int u=1;
    for(int x:st){
      mp[x] = st.size()-u;
      u++;
    }

    for(int x:ls){
      ans[mp[x]]++;
    }
    for(int x:ans)
      cout<<x<<"\n";
  }
}
