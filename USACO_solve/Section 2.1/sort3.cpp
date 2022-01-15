/*
ID: jahid.h1
TASK: sort3
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
freopen("sort3.in","r",stdin);
freopen("sort3.out","w",stdout);
//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int t=1;t<=tt;t++){
	int mp[4][4]={},cn[4]={};
	int n;cin>>n;
	vector<int> ls(n);
	for(int &x:ls) cin>>x,cn[x]++;
	for(int u=1;u<4;u++) cn[u]+=cn[u-1];
	for(int u=0;u<n;u++){
		if(u<cn[1]) mp[1][ls[u]]++;
		else if(u<cn[2]) mp[2][ls[u]]++;
		else mp[3][ls[u]]++;
	}
	int an=0;
	for(int u=1;u<4;u++){
		for(int v=u+1;v<4;v++){
		int mn=min(mp[u][v],mp[v][u]);
		an+=mn,mp[u][v]-=mn,mp[v][u]-=mn;
		}}int ha=0;
	for(int u=1;u<4;u++)
		for(int v=1;v<4;v++)
			if(u!=v) ha+=mp[u][v];
	if(ha) an+=(ha/3)*2;
	cout<<an<<"\n";
}}
