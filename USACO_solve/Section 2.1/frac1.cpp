/*
ID: jahid.h1
TASK: frac1
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool huh(const pair<int,int> &a,
        const pair<int,int> &b){
    return (a.second*b.first/(b.second*a.first));
}
int main(){
freopen("frac1.in","r",stdin);
freopen("frac1.out","w",stdout);
//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int t=1;t<=tt;t++){
	int n;cin>>n;
	map<pair<int,int>,int> mp;
	vector<pair<int,int>> ls;
	for(int u=0;u<=n;u++){
		for(int v=u;v>0;v--){
		int a=u/__gcd(u,v),b=v/__gcd(u,v);
		if(!mp[{a,b}]) 
			ls.push_back({b,a}),
			mp[{a,b}]=1;
		}
	}
	sort(ls.begin(),ls.end(),huh);
	cout<<"0/1\n";
	for(auto x:ls) 
		cout<<x.first<<'/'<<x.second<<"\n";
}}
