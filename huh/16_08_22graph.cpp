#include<bits/stdc++.h>
using namespace std;
int main(){

  cout<<"Enter the number of nodes:";
  int n;cin>>n;
  cout<<"Enter number of edges:";
  int e;cin>>e;
  vector<vector<int>> g(n+1);
  int cost[n+1][n+1];
  vector<int> dist(n+1,INT_MAX);

  cout<<"Enter two adjacent node and their cost"<<endl;

  for(int fu=0;fu<e;fu++){
    int u,v,c;
    cin>>u>>v>>c;
    g[u].push_back(v);
    g[v].push_back(u);
    cost[v][u] = cost [u][v] = c;

  }

  cout<<"Enter Source ans DEstination";
  int src,dest;
  cin>>src>>dest;
  priority_queue<pair<int,int>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
  pq.push({0,src});

  while(!pq.empty()){
    pair<int,int> cur = pq.top();
    pq.pop();
    int u = cur.second;
    int c = cur.first;

  

  for(int i=0;i<g[u].size();i++){
    int v= g[u][i];
    if(dist[v]>c +cost[u][v]){
      dist[v] = c + cost[u][v];
      pq.push({dist[v] , v});
    }
  }
  }

  cout<<dist[dest];
  return 0;
}

/*
1 3 2
1 2 5
1 0 4
1 4 4
0 2 3
0 4 4
2 3 7
3 4  2
4 5 6
*/