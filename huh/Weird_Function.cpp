#include<bits/stdc++.h>
using namespace std;
using ll =  long long;
 
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	cin>>T;
for(ll _t=1;_t<=T;_t++){
  ll an=1;
  ll nw=1;
  ll a,b,c,n;
  cin>>a>>b>>c>>n;
  priority_queue<ll> fi,se;
  fi.push(nw);
  for(ll u=2;u<=n;u++){
    ll med;
    if(fi.empty()) 
      med = (-se.top());
    else if(se.empty()) 
      med = fi.top();
    else if(fi.size()>se.size())
      med = fi.top();
    else if(se.size()>fi.size())
      med = (-se.top());
    else med = min(fi.top(),(-se.top()));
    nw = (a * med + b * u +c)%1000000007;

    fi.push(nw),se.push(-nw);
    if(fi.top()==nw)
      fi.pop();
    else se.pop();

    if(abs(ll(fi.size())-ll(se.size()))>1){
      if(fi.size()>se.size())
        se.push(-fi.top()),fi.pop();
      else 
        fi.push((-se.top())),se.pop();
    }
    an += nw;
    

  }
  cout<<an<<"\n";
}}
