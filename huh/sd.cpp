#include<bits/stdc++.h>
using namespace std;typedef long long ll;int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
int T=1;cin>>T;
for(int tt=1;tt<=T;tt++){
	int n,k,z;cin>>n>>k>>z;
	vector<int> ls(n);
	for(int &x:ls) cin>>x;
	ll ans=ls[0],mx=ls[0]+ls[1],mx2=0,mn=min(n-1,k);
	int u=1;
	while(u<=mn){
		if(u>0&&u<n){int u1=u,mn1=mn;
			if(u<mn&&z>0&&k>1){
				if(ls[u]+ls[u-1]>ls[mn]+ls[mn-1]){
				ans+=ls[u]+ls[u-1];
				mn-=2,z--;
				}
				else  ans+=ls[u++],k--;
				mx=max(mx,(ll)ls[u1]+ls[u1-1]);
				mx=max(mx,(ll)ls[mn1]+ls[mn1-1]);
				
				if(mx==ls[u1]+ls[u1-1]&&mx==ls[mn1]+ls[mn1-1]) mx2=(max(ls[u1],ls[u1-1]),max(ls[mn1],ls[mn1-1]));
				else if(mx==ls[u1]+ls[u1-1]) mx2=max(ls[u1],ls[u1-1]);
				else if(mx==ls[mn1]+ls[mn1-1]) mx2=max(ls[mn1],ls[mn1-1]);
			}
			else if(k>0&&u<n) ans+=ls[u++],k--;
			else break;
		}
		else u++;
	}z=min(z,k);
	ans+=mx*(z/2);
	if(z&1) ans+=mx2;
	cout<<ans;
cout<<'\n';}}
 
