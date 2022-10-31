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
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x;
    sort(ls.rbegin(),ls.rend());
    cout<<ls[0]+ls[1]-ls[n-1]-ls[n-2]<<"\n";
  }
}
