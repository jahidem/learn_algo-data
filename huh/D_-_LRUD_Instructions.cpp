#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int T;
    cin>>T;
    for(int tt=1;tt<=T;tt++){
        long long rs,rh;
        cin>>rs>>rh;
        int n;cin>>n;
        int y=0,z=0;
        vector<pair<long long,int>> pr;
        while(n){
          int a,b;
          cin>>a>>b;
          if(a*a+b*b<=(rh+rs)*(rh+rs))
            pr.push_back({a*a+b*b,0});
        n--;}
        cin>>n;
        while(n){
          int a,b;
          cin>>a>>b;
          if(a*a+b*b<=(rh+rs)*(rh+rs))
            pr.push_back({a*a+b*b,1});
        n--;}

        sort(pr.begin(),pr.end());
        int u=0,nw=1;
        if(pr.size()) nw = pr[0].second;
        while(u<pr.size()&&nw==pr[u].second){
          if(pr[u].second)
            z++;
          else y++;
        u++;}
      cout<<"Case #"<<tt<<": "<<y<<" "<<z<<"\n";
    }
}
