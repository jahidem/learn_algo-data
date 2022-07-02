/*
ID: jahid.h1
TASK: numtri
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;typedef long long ll;
int T=1;void eo();int main(){//cin>>T;
while(T--)eo();}
void eo(){
	freopen("numtri.in","r",stdin);
	freopen("numtri.out","w",stdout);
	int n;cin>>n;
	vector<vector<int>> ls(n);
	int u=1;
	for(auto &x:ls){
	x=vector<int> (u++);
	for(int &y:x) cin>>y;
	}
	for(int u=n-2;u>=0;u--){
	auto &re=ls[u];
	for(int v=0;v<re.size();v++){
		re[v]+=max(ls[u+1][v],ls[u+1][v+1]);
	}
	}cout<<ls[0][0];
cout<<'\n';}
