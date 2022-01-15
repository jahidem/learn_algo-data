/*
ID: jahid.h1
TASK: holstein
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool huh(const vector<int> &a,
        const vector<int> &b){
    if(int(a.size())>int(b.size())) return false;
    else if(a.size()==b.size()){
		for(int u=0;u<int(a.size());u++)
			if(a[u]<b[u]) return true;
			else if(a[u]>b[u]) return false;
	}return true;
}
int main(){
freopen("holstein.in","r",stdin);
freopen("holstein.out","w",stdout);
//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int t=1;t<=tt;t++){
	int n;cin>>n;
	vector<int> ls(n);
	for(int &x:ls) cin>>x;
	int m;cin>>m;
	vector<vector<int>> re(m),an;
	for(int u=0;u<m;u++){
		vector<int> la(n);
		for(int &x:la) cin>>x;
		re[u]=la;
	}
	for(int u=1;u<(1<<m);u++){
		int tm=u,v=0;
		vector<int> la(n,0),ha;
		while(tm){
			if(tm&1){
				for(int w=0;w<n;w++)
					la[w]+=re[v][w];
			ha.push_back(v+1);}
		tm/=2,v++;}
		int f=1;
		for(int ua=0;ua<n;ua++)
			if(ls[ua]>la[ua]) f=0;
		if(f&&int(ha.size()))
			an.push_back(ha);
	}
	sort(an.begin(),an.end(),huh);
	cout<<int(an[0].size());
	for(auto x:an){
		for(int y:x) cout<<" "<<y;
		break;}
	cout<<"\n";
	
}}
