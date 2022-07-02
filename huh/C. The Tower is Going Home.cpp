#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int _t=1;_t<=tt;_t++){
	int n,m;
	cin>>n>>m;
	vector<int> ls(n),fina;
	map<int,vector<pair<int,int>>> mp;
	for(int &x:ls) cin>>x;
	while(m--){
		int a,b,y;cin>>a>>b>>y;
		mp[y].push_back({a,b});
	}
	for(auto x:mp){
		vector<pair<int,int>> nw=x.second;
		sort(nw.begin(),nw.end());
		if(nw[0].first==1){
			int up,pre=1;
			for(auto pa:nw){
				if(pa.first!=pre)
					break;
				else up=pa.second;
				pre=pa.second+1;
			}
			fina.push_back(up);
		}
	}
	sort(fina.rbegin(),fina.rend());
	ls.push_back(1e9);
	sort(ls.rbegin(),ls.rend());
	int cos=0,u=0,mn=1e9;
	for(int x:ls){
		while(u<int(fina.size())&&fina[u]>=x)
			u++,cos++;
		mn=min(mn,cos);
	cos++;}
	cout<<mn<<"\n";
}}
