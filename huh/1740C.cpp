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
    int n;cin>>n;
    vector<ll> la(n),ls;
    set<ll> st;
    map<ll,int> mp;
    for(ll &x:la){
      cin>>x,st.insert(x);
      if(!mp[x]) ls.push_back(x),mp[x]=1;

    }
    sort(ls.begin(),ls.end());
if(st.size()==1) cout<<0<<"\n";
    else if(st.size()==2)
      cout<<2* (ls[1]- ls[0])<<"\n";
    else cout<<max(ls[1]-ls[0],ls[ls.size()-1] - ls[ls.size()-2]) + ls[ls.size()-1]- ls[0]<<"\n";
  }
}
