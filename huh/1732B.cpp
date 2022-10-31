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
    string s;cin>>s;
    int an=0,f=0;
    char pas;
    for(int u=0;u<n;u++){
      if(!f && s[u]=='1')
        f=1,pas=s[u];
      else if(f&&pas!=s[u])
        an++,pas=s[u];
    }
    cout<<an<<"\n";
  }
}
