#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int EPS= 10e-9;
template <typename T>
struct pnt{T x,y;
	pnt(){x=y=0;}
	pnt(T _x,T _y): x(_x),y(_y){} 
	bool operator < (pnt othr) const{
		if(fabs(x-othr.x)>EPS)
			return x<othr.x;
		return y<othr.y;
	}
	bool operator == (pnt othr) const {
	return (fabs(x - othr.x) < EPS && (fabs(y - othr.y) < EPS));
	} 
	T dist(pnt pa,pnt pb){
		return (pa.x-pb-x,pa.y-pb.y);
	}
};

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);	
int t=1;//cin>>t;
while(t--){
	 int a;
	 while(cin>>a){
		 if(a==0) break;
		cout<<char(a);
	 }
	 
}}
