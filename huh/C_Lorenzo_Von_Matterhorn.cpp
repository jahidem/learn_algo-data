#include<bits/stdc++.h>
using namespace std;
using ll = unsigned long long;
 
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
  map<pair<ll,ll>,ll> cost;
  ll q;cin>>q;
  while(q--){
    ll type,u,v,w;cin>>type;
    if(type==1){
      cin>>u>>v>>w;
      ll nw=1;
      vector<int> bana;
      map<pair<ll,ll>,ll> tm;
      while(u)
        bana.push_back(u&1),u/=2;
      reverse(bana.begin(),bana.end());
      for(int i=1;i<int(bana.size());i++){
        ll ne=nw;
        if(bana[i])
          ne = ne*2+1;
        else ne*=2;
        tm[{nw,ne}]=tm[{ne,nw}]=1;
        cost[{nw,ne}]+=w,
        cost[{ne,nw}]+=w;
      nw=ne;}
      nw=1;
      bana.clear();
      while(v)
        bana.push_back(v&1),v/=2;
      reverse(bana.begin(),bana.end());
      for(int i=1;i<int(bana.size());i++){
        ll ne=nw;
        if(bana[i])
          ne = ne*2+1;
        else ne*=2;
        if(tm[{nw,ne}]||tm[{ne,nw}])
          cost[{nw,ne}]-=w,
          cost[{ne,nw}]-=w;
        else  
          cost[{nw,ne}]+=w,
          cost[{ne,nw}]+=w;
      nw=ne;}      

    }
    else{
      ll an=0;
      /////

      cin>>u>>v;
      ll nw=1;
      vector<int> bana;
      map<pair<ll,ll>,ll> tm;
      while(u)
        bana.push_back(u&1),u/=2;
      reverse(bana.begin(),bana.end());
      for(int i=1;i<int(bana.size());i++){
        ll ne=nw;
        if(bana[i])
          ne = ne*2+1;
        else ne*=2;
        tm[{nw,ne}]=tm[{ne,nw}]=1;
        an+=cost[{nw,ne}];
      nw=ne;}
      nw=1;
      bana.clear();
      while(v)
        bana.push_back(v&1),v/=2;
      reverse(bana.begin(),bana.end());
      for(int i=1;i<int(bana.size());i++){
        ll ne=nw;
        if(bana[i])
          ne = ne*2+1;
        else ne*=2;
        if(tm[{nw,ne}]||tm[{ne,nw}])
          an-=cost[{nw,ne}];
        else  
          an+=cost[{ne,nw}];
      nw=ne;} 

      ////
      cout<<an<<"\n";
    }
  }
}}