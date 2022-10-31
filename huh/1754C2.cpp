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
    vector<int> ls(n);
    for(int &x:ls)
      cin>>x;
    int pas=0,indx=-1,pre=1,u=1;
    vector<pair<int,int>> pr;
    for(int x:ls){
      if(x){
        if(indx!=-1){
        if(pas!=x){
          if(pre!=indx) pr.push_back({pre,indx-1});
          pr.push_back({indx,indx});
          if(indx+1!=u) pr.push_back({indx+1,u-1});
          pr.push_back({u,u});
        }
        else{
          if(pre!=indx) pr.push_back({pre,indx-1});

          if(indx+1==u)
             pr.push_back({indx,u});
          else{
            pr.push_back({indx,indx});
            if(u-2!=indx) pr.push_back({indx+1,u-2});
            pr.push_back({u-1,u});
          }
         
        }

        indx=-1,pre=u+1;}
        else indx=u,pas=x;
      }
    u++;}
    if(indx!=-1)
      cout<<-1<<"\n";
    else{
      cout<<pr.size()+(pre<=n)<<"\n";
      for(auto x:pr)
        cout<<x.first<<" "<<x.second<<"\n";
      if(pre<=n)
        cout<<pre<<" "<<n<<"\n";
    }
  }
}
