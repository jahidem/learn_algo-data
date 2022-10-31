#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll T = 1;  //cin>>T;
  for(int TT=1;TT<=T;TT++){ 
    int n;cin>>n;
    set<ll> st;
    while(n--){
      char ch;
      ll an;
      cin>>ch>>an;
      if(ch=='+') st.insert(an)
      else{
        ll lo =1,hi=ll(1e18/an) * an,mid; 
        while(lo-hi>1){
          mid= lo + (hi-lo)/2;
          it = lower_bound(st.begin(),st.end(),mid*an);
          if(it==st.end())
              hi = mid;
          else{
            if(*it == mid*an)
              hi = mid;
            else 
          }
        }
      }
    }
  }
}
