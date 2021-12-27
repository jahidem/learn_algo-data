#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> cmbiii(const string &st){
	int sz=st.length(),hi=1<<sz;
	vector<int> an,mp(sz,0);
	for(int u=1;u<hi;u++){
		mp= vector<int> (sz,0);string ans="";
		int tm=u,nw=0;while(tm){if(tm%2) mp[nw]=1;
		tm/=2;nw++;}nw=0;for(char x:st){if(mp[nw]) ans+=x;
		nw++;}int na;stringstream as(ans);as>>na;
		if(ans[0]!='0') an.push_back(na);
	}
	return an;}