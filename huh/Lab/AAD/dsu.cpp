#include<iostream>
using namespace std;

int par[100],siz[100];

int fina(int nw){
  if(par[nw]!=nw)
    par[nw] = fina(par[nw]);
  return nw;
}

void uni(int u,int v){
    u= fina(u);
    v= fina(v);
    par[u] = v;
}
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++)
    par[i]=i;
  int m;
  cout<<"Enter number of edges: ";
  cin>>m;
  cout<<"Enter two adjacent edges:"<<endl;
  while(m--){
    int u,v;cin>>u>>v;
    uni(u,v);
  }

  int grp =0 ;
  for(int u=1;u<=n;u++)
    if(u==par[u]) grp++;

  cout<<grp<<"\n";

  
}