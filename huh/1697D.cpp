#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;  //cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n;cin>>n;
    string s(n,'.');
    vector<int> pos,pref(n+1,0);
    int pre =0 ;
    for(int u=1;u<=n;u++){
      cout<<"? 2 1 "<<u<<flush;
      int len;
      cin>>len;
      pref[u] = len;
      if(len!=pre){
        pre=len;
        cout<<"? 1 "<<u<<flush;
        char ch;cin>>ch;
        s[u-1] = ch;
        pos.push_back(u);
      }
    }
    int u=1;
    for(char &x:s){
      if(x=='.'){
        map<char,int> mp;
        pre = 1;
        for(int nw=u-1;nw>0;nw--){
          int tm = pref[u] - pref[nw-1];
          if(!mp[s[nw-1]] && pre == tm)
            {
              x = s[nw-1];
              break;
            }
          mp[s[nw-1]] = 1, pre = tm;
        }

      }
    u++;}
    cout<<"! "<<s<<"\n"<<flush;
  }
}
//abad acad