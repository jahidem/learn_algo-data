#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>> spt;
vector<int> ls;
void build(int n){
	for(int u=0;u<n;u++)
		spt[u][0] = ls[u];
	for(int u=1;u<=25;u++){
		for(int v=0;v+(1<<u)<=n;v++)
			spt[v][u] = min( spt[v][u-1],spt[v+ (1<<(u-1)) ][u-1] );}
}
int rmq(int l,int r){
	int j=(int)log2(r - l + 1);
	return min(spt[l][j] , spt[r-(1<<j) +1][j]);
}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);freopen("inp", "r", stdin);
ll tt=1;cin>>tt;
for(ll _t=1;_t<=tt;_t++){
	int n,q;cin>>n>>q;
	ls=vector<int> (n);
	spt=vector<vector<int>>  (n+1,vector<int>(25,1e9));
	for(int &x:ls) cin>>x;
	build(n);
	cout<<"Case "<<_t<<":\n";
	while(q--){
		int a,b;cin>>a>>b;
		cout<<rmq(a-1,b-1)<<"\n";
	}  
}}
