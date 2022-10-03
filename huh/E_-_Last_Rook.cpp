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
    int n;cin>>n;
    int a=1,b=n,c=1,d=n;
    int up=1;
    while(a!=b){
      int mid = (a+b)/2;
      cout<<"? "<<a<<" "<<mid<<" "<<c<<" "<<d<<"\n"<<flush;
      cin>>up;

      if(mid-a+1!=up)
        b=mid;
      else a=mid+1;
    }
    int x=a; a=1,b=n;
    while(c!=d){
      int mid = (c+d)/2;
      cout<<"? "<<a<<" "<<b<<" "<<c<<" "<<mid<<"\n"<<flush;
      cin>>up;

      if(mid-c+1!=up)
        d=mid;
      else c=mid+1;
    }
    cout<<"! "<<x<<" "<<c<<"\n"<<flush;
  }
}
