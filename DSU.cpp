#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define gol(n) for(int o=0;o<n;o++)
vector<int> ls;
int get(int a){
	if(ls[a]!=a) ls[a]=get(ls[a]);
	return ls[a];
}
void uni(int a,int b){
	a=get(a);b=get(b);
	ls[a]=b;
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,u=1;cin>>n>>m;ls.push_back(0);
	while(u<=n){ ls.push_back(u);u++;}
	while(m--){
		string s;
		int a,b;
		cin>>s>>a>>b;
		if(s=="union") uni(a,b);
		else cout<<(get(a)==get(b)?"YES":"NO")<<"\n";
	}
}

