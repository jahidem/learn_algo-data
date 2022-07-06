#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
string s;
ll dp[100005][3][3];
int dpx(int indx,int flip,int prev){
  if(indx>=n)
   return 0;
  else if(dp[indx][flip][prev]!=-1)
    return dp[indx][flip][prev];
  
  int cal = dpx(indx+1,flip,prev),
      nw = s[indx]-'0'+1;
  if(!prev){
    cal = max(cal ,dpx(indx+1,flip,nw));
  }
  if(flip<2)
    cal = max(cal,(prev==nw) 
            + dpx(indx+1,flip+1,nw));
  cal = max(cal,(prev!=nw) 
            + dpx(indx+1,flip,nw));
  return dp[indx][flip][prev] = cal;
}
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  cin>>n>>s;
  memset(dp,-1,sizeof(dp));
  cout<<dpx(0,0,0);
}}