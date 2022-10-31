#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
int oboe[101][9][2];
int mrk[101][2];
int oboex(int indx,int md,int nei){
  if(indx>=s.size())
    return 0;
  md = nei? (md*10 + (s[indx]-'0'))% 8 : md;
  if(!md){
    mrk[indx][nei] = -1;
    return 1;}
  if(oboe[indx][md][nei]!=-1)
    return oboe[indx][md][nei];

  int ret =0  ;
  ret = oboex(indx+1, md , 0);
  if(ret){
    mrk[indx][nei] = 0;
    return oboe[indx][md][nei] = 1;
  }

  ret = oboex(indx+1, md , 1);
  if(ret){
    mrk[indx][nei] = 1;
  }
  return oboe[indx][md][nei] = ret;
}

void prnt(int indx,int nei){
  if(nei)
    cout<<s[indx];
  int ne = mrk[indx][nei];
  if(ne==-1)
    return;
  prnt(indx+1,ne);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
   //freopen("inp", "r", stdin);
  ll T = 1;//  cin>>T;
  for(int tt=1;tt<=T;tt++){
    cin>>s; 
    memset(oboe,-1,sizeof(oboe));
    for(int u=0;u<s.size();u++){
      if(oboex(u,0,1)){
        cout<<"YES\n";
        prnt(u,1);
        return 0;
      }
    }
    cout<<"NO";
  }
}
