#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;cin>>n;
	vector<pair<int,int>> ls(n),le(n);
	for(auto &x:ls) 
		cin>>x.first>>x.second;
	ll tm=0,an;
	for(int u=n-1;u>=0;u--){
		auto &x=ls[u];x.first*=1000;
	
		le[u]={tm,x.first/x.second+tm};
		tm+=x.first/x.second;
	}tm=0;int u=0;
	for(auto x:ls){
		ll tm2=tm+x.first/x.second;
		if((tm<=le[u].second&&le[u].first<=tm)||
			(tm2<=le[u].second&&le[u].first<=tm2)){
			cout<<tm<<" "<<tm2<<"\n"<<le[u].first<<" "<<le[u].second;
			
			an=tm+(x.first+x.second*(le[u].first-tm))/2;
			break;}
		tm+=x.first/x.second;
	u++;}
	cout<<an;
	
}
