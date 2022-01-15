/*
ID: jahid.h1
TASK: castle
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<int>> ls,vis;
int cur,n,m,mx=0;
map<int,int> mp;
void df(int u,int v){
	if(u<0||u>=n||v<0||v>=m||vis[u][v])
		return;
	vis[u][v]=cur,mp[cur]++;
	mx=max(mx,mp[cur]);
	if(!(ls[u][v]&1))
		df(u,v-1);
	if(!(ls[u][v]&2))
		df(u-1,v);
	if(!(ls[u][v]&4))
		df(u,v+1);
	if(!(ls[u][v]&8))
		df(u+1,v);
} 
int main(){
freopen("castle.in","r",stdin);
freopen("castle.out","w",stdout);
//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int t=1;t<=tt;t++){
	cin>>m>>n;
	ls=vis=vector<vector<int>> 
		(n,vector<int> (m,0));
	for(int u=0;u<n;u++){
		for(int v=0;v<m;v++){
		cin>>ls[u][v];
		}}
	cur=0;
	for(int u=0;u<n;u++){
		for(int v=0;v<m;v++){
		if(!vis[u][v]){
				cur++,df(u,v);
		}
		}}
	int mx2=0,pu=-1,pv=1e9;char ch;
	for(int u=0;u<n;u++){
		for(int v=0;v<m;v++){//cout<<vis[u][v];
		if((ls[u][v]&1)&&v-1>-1
			&&vis[u][v-1]!=vis[u][v]
			&&mp[vis[u][v-1]]+mp[vis[u][v]]>=mx2)
			mx2=mp[vis[u][v-1]]+mp[vis[u][v]],
			pu=u,pv=v,ch='W';
		if((ls[u][v]&2)&&u-1>-1
			&&vis[u-1][v]!=vis[u][v]
			&&mp[vis[u-1][v]]+mp[vis[u][v]]>=mx2)
			mx2=mp[vis[u-1][v]]+mp[vis[u][v]],
			pu=u,pv=v,ch='N';
		if((ls[u][v]&4)&&v+1<m
			&&vis[u][v+1]!=vis[u][v]
			&&mp[vis[u][v+1]]+mp[vis[u][v]]>=mx2)
			mx2=mp[vis[u][v+1]]+mp[vis[u][v]],
			pu=u,pv=v,ch='E';
		if((ls[u][v]&8)&&u+1<n
			&&vis[u+1][v]!=vis[u][v]
			&&mp[vis[u+1][v]]+mp[vis[u][v]]>=mx2)
			mx2=mp[vis[u+1][v]]+mp[vis[u][v]],
			pu=u,pv=v,ch='S';
		}}pu=-1,pv=1e9;
	for(int u=0;u<n;u++){
		for(int v=0;v<m;v++){//cout<<vis[u][v];
		if((ls[u][v]&1)&&v-1>-1
			&&vis[u][v-1]!=vis[u][v]
			&&mp[vis[u][v-1]]+mp[vis[u][v]]==mx2
			&&(pv>=v&&u>=pu))
				pu=u,pv=v,ch='W';
		if((ls[u][v]&8)&&u+1<n
			&&vis[u+1][v]!=vis[u][v]
			&&mp[vis[u+1][v]]+mp[vis[u][v]]==mx2
			&&(pv>=v&&u>=pu))
				pu=u,pv=v,ch='S';
		if((ls[u][v]&4)&&v+1<m
			&&vis[u][v+1]!=vis[u][v]
			&&mp[vis[u][v+1]]+mp[vis[u][v]]==mx2
			&&(pv>=v&&u>=pu))
				pu=u,pv=v,ch='E';
		if((ls[u][v]&2)&&u-1>-1
			&&vis[u-1][v]!=vis[u][v]
			&&mp[vis[u-1][v]]+mp[vis[u][v]]==mx2
			&&(pv>=v&&u>=pu))
				pu=u,pv=v,ch='N';
		
		}}
	
	cout<<cur<<"\n"<<mx<<"\n"<<mx2<<"\n"
	<<pu+1<<" "<<pv+1<<" "<<ch<<"\n";
}}
