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
    int n,x;cin>>n>>x;
    int cn=0,an=0;
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x;
    sort(ls.rbegin(),ls.rend());

    for(int xx:ls){
      cn++;
      if(xx*cn>=x)
        cn=0,an++;
    }
    cout<<an<<"\n";
  }
}
