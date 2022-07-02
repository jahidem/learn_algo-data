#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int _t=1;_t<=tt;_t++){
	int n,k;cin>>n>>k;
	int a;
	map<char,int> val;
	cin>>a;val['r']=a;
	cin>>a;val['s']=a;
	cin>>a;val['p']=a;
	map<char,char> op;
	op['r']='p';
	op['p']='s';
	op['s']='r';
	int ans=0;
	string s,an="";cin>>s;
	for(int u=0;u<n;u++){
		if(u>=k){
			if(an[u-k]!=op[s[u]])
				ans+=val[op[s[u]]],an+=op[s[u]];
			else an+='.';
		}
		else ans+=val[op[s[u]]],an+=op[s[u]];
	}
	cout<<ans;
}}
