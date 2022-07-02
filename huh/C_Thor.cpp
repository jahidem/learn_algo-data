#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);
//freopen("inp", "r", stdin);
ll T=1;	//cin>>T;
for(ll _t=1;_t<=T;_t++){
	  int n,q;cin>>n>>q;
    map<int,int> glcnt,cnt;
    queue<int> Q;
    int unr=0,t=0;
    while(q--){
      int a,b;
      cin>>a>>b;
      if(a==1){
        unr++;Q.push(b);
        glcnt[b]++;
      }
      else if(a==2){
        unr-=glcnt[b];
        cnt[b]+=glcnt[b];
        glcnt[b]=0;
      }
      else if(t<b){
        int dis=b-t;
        t=b;
        while(dis--){
          if(cnt[Q.front()])
            cnt[Q.front()]--;
          else 
            glcnt[Q.front()]--,unr--;
        Q.pop();}
      }
    cout<<unr<<"\n";}
}}