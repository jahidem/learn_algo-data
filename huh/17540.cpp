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
    int  n;cin>>n;
    string s;cin>>s;
    int sm=0;
    for(char x:s)
      sm+=(x=='Q'),sm-=(sm && (x=='A'));
    cout<<(!sm? "Yes":"No")<<"\n";
  }
}
