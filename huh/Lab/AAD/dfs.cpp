#include<iostream>
using namespace std;
int n,m,vis[100][100],r,c,g[100][100];


bool isValid(int i,int j){
  if(i>=n || j>=n || i<0 || j<0 || vis[i][j])
    return false;
  return true;

}

void dfs(int r,int c){
  vis[r][c] =1;
  const int dx[] = {-1 , 0 , 1 , 0};
  const int dy[] = {0, 1, 0, -1};

  for(int i=0;i<4;i++){
    int rr= r+dx[i];
    int cc = c+ dy[i];

    if(isValid(rr,cc) && g[rr][cc]==1){
      dfs(rr,cc);
    }
  }
}
int main(){
  cin>>n>>m;

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>g[i][j];
    }
  }

  int island = 0 ;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(vis[i][j]==0 && g[i][j]==1){
        ++island;
        dfs(i,j);
      }
    }
  }
  cout<<island<<"\n";
}

/*
for(int x:{1 , 3, 4}){
  for(int y:{2 ,4,5})
    codut<<x+y;
}
*/