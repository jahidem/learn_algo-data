/*
ID: jahid.h1
TASK: hamming
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
freopen("hamming.in","r",stdin);
freopen("hamming.out","w",stdout);
//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int t=1;t<=tt;t++){
	int n,b,d;cin>>n>>b>>d;
	vector<int> ls{0};
	for(int u=1;u<(1<<b);u++){
		int f=1;
		for(int x:ls){
			int nw=u,cn=0,xx=x;
			while(nw||xx){
				cn+=((nw&1)!=(xx&1));
			nw/=2,xx/=2;}
			if(cn<d) f=0;
		}
		if(f) ls.push_back(u);
		if(ls.size()==n) break;
	}int hu=0;
	for(int x:ls){
		hu++,cout<<x;
		if(hu!=ls.size()&&(hu%10))cout<<" ";
		if(hu%10==0&&ls.size()!=hu) cout<<"\n";
	}cout<<"\n";
	
}}
