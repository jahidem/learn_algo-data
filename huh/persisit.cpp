#include<bits/stdc++.h>
using namespace std;
int main(){
int T=1;//cin>>T;
while(T--){
	int n;cin>>n;
	vector<int> ls[3],la;
	n*=2;
	while(n--){
		int a;cin>>a;
		char c;cin>>c;
		if(c=='R') ls[0].push_back(a);
		else if(c=='G') ls[1].push_back(a);
		else ls[2].push_back(a);
	}
	for(auto &x:ls) sort(x.begin(),x.end());


	#include<bits/stdc++.h>
using namespace std;
int main(){
int T=1;cin>>T;
while(T--){
	int n,l,r;cin>>n>>l>>r;
	vector<int> ls(n),la;long long an=0;
	for(int &x:ls) cin>>x;
		sort(ls.begin(),ls.end());
	la=ls;
	for(int x:la){
//		cout<<ls.size()<<an;
		if(x<r){
			int nw=r-x;
			int nl=l-x;
			int ra,al,f=1;
			if(upper_bound(ls.begin(),ls.end(),nw)!=ls.end())
				 ra=upper_bound(ls.begin(),ls.end(),nw)-ls.begin();
			else ra=n;
			if(lower_bound(ls.begin(),ls.end(),nl)!=ls.end())
				 al=lower_bound(ls.begin(),ls.end(),nl)-ls.begin();
			else al=n;
			if(f&&al<ra) an+=ra-al;
			if(2*x<=r&&l<=2*x) an--;
			
		}
	}
	cout<<an/2<<'\n';
#include<bits/stdc++.h>
using namespace std;
int main(){
int T=1;//cin>>T;
while(T--){
	int n;cin>>n;
	long long mi=0,plu=0;
	vector<pair<int,int>> ls(n);
	for(auto &x:ls){
		float a;cin>>a;
		x.first=floor(a);int f=(floor(a)==ceil(a));
		if(floor(a)>=0) x.first=ceil(a);
		if(x.first<0) mi-=x.first;
		else plu+=x.first;
		x.second=f;}
	int k=abs(mi-plu);
	if(mi>plu){
		for(auto y:ls){int x=y.first;
			if(k&&x<0&&!y.second) cout<<x+1,k--;
			else cout<<x;
		cout<<'\n';}
	}
	else if(mi<plu){
		for(auto y:ls){int x=y.first;
			if(k&&x>0&&!y.second) cout<<x-1,k--;
			else cout<<x;
		cout<<'\n';}
	} 
	else for(auto x:ls) cout<<x.first<<'\n';
}}

}}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int T=1;cin>>T;
for(int tt=1;tt<=T;tt++){
	ll n,c;cin>>n>>c;
	vector<pair<ll,ll>> pr,an;
	while(n--){
		ll a,b;cin>>a>>b;
		pr.push_back({a,1});
		pr.push_back({a,-1});
	}
	sort(pr.begin(),pr.end());
	ll cn=0,nw=pr[0].first,pre=1e13;
	for(auto x:pr){
		if(nw==x.first){ cn+=x.second;continue;}
	if(pre!=1e13){
		if(x.first-nw-1) an.push_back({pre,x.first-nw-1})
	}
	pre=cn,nw=x.first;}
	sort(an.rbegin(),an.rend());
	
}}