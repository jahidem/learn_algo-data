#ifdef LOCAL69
freopen("in.txt", "r", stdin);
// freopen("out.txt", "w", stdout);
#endif
Then compile your codes with -DLOCAL69 flag set in g++/gcc.



/*
ID: jahid.h1
TASK: namenum
LANG: C++                 
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define go(k) for(int u=0;u<k;u++)

	freopen("weak_typing_chapter_1_validation_input.txt", "r", stdin);
	freopen("palsquare.out", "w", stdout);

printf("%d\n", mid);scanf("%s", response);
        fflush(stdout);
//If it ain't x'o then it gotta go
#define S second
#define F first
 cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
ios_base::sync_with_stdio(0); cin.tie(0)

 ofstream fout ("test.out");
    ifstream fin ("test.in");
   fin >> a >> b;
    fout << a+b << endl;
cout<<fixed<<setprecision(10)<<sum<<endl;

///fac
nit fact[12];fact[0] = 1;
    for(nit i=1; i<=wh; i++) fact[i] = fact[i-1] * i;
    ////
#include<bits/stdc++.h>
#define bip(n) cout<<"\t\t"<<n;
using namespace std;void sol();
typedef long long ll;int main(){int t=1;//cin>>t;
while(t--)sol();}
void sol(){
	
}








freopen("input.in","r",stdin);
freopen("output.out","w",stdout);
int main() {
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a, b;
    fin >> a >> b;
    fout << a+b << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;typedef long long ll;int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);
ll T=1;cin>>T;
for(ll tt=1;tt<=T;tt++){

cout<<setw(5)<<setiosflags(ios::right)<<mx;
///**********BIGMOD*********


int bigmo(ll b,ll ex, ll M) {
	ll an=1,rema= b%M;
	while(ex!=0){
		if(ex%2==1)	an = (an*rema)%M;
		rema=(rema*rema)%M,ex/=2;                                                                     
	}
	return an;}

////////////////

/*
 * ****
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef struct {
	int q,w,e;
} tin;
bool xo(const tin &a,
              const tin &b){	
    if(a.q != b.q)	
		return (a.q < b.q);
	else if(a.w!=b.w)
		return (a.w < b.w );
	else return (a.e < b.e );
}
int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int _t=1;_t<=tt;_t++){
	int n;cin>>n;
	vector<tin> ls(n);
	for(auto &x:ls)	cin>>x.q>>x.w>>x.e;
	sort(ls.begin(),ls.end(),xo);
	for(auto x:ls)
		 cout<<x.q<<" "<<x.w<<" "<<x.e<<"\n";
}}
* ****
*/




#include<bits/stdc++.h>
using namespace std;typedef long long ll;
int T=1;void eo();int main(){cin>>T;
while(T--)eo();}
void eo(){
	
cout<<'\n';}

///********DSu************
vector<int> ls;
int get(int a){
	if(ls[a]!=a) ls[a]=get(ls[a]);
	return ls[a];
}
void uni(int a,int b){
	a=get(a);b=get(b);
	ls[a]=b;
}
//****************************

///*********segment tree************* 

void build(int node, int lo, int hi){
	if(lo==hi)
		tr[node] = A[lo];
    else{
        int mid = (lo + hi) / 2;
        build(2*node, lo, mid);
        build(2*node+1, mid+1, hi);
         if(hoh(node))
			tr[node] = tr[2*node] | tr[2*node+1];
		else 
			tr[node] = tr[2*node] ^ tr[2*node+1];}
}
void update(int node, int lo, int hi, int idx, int val)
{
    if(lo == hi){
        A[idx] = val;
        tr[node] = val;
    }
    else{
        int mid = (lo + hi) / 2;
        if(lo <= idx and idx <= mid){
            update(2*node, lo, mid, idx, val);}
        else{
            update(2*node+1, mid+1, hi, idx, val);}
        if(hoh(node))
			tr[node] = tr[2*node] | tr[2*node+1];
		else 
			tr[node] = tr[2*node] ^ tr[2*node+1];
    }
}
int query(int node, int lo, int hi, int l, int r)
{
    if(r < lo or hi < l)
		return -1;
    if(l <= lo and hi <= r)
		return tr[node];
    int mid = (lo + hi) / 2;
    int p1 = query(2*node, lo, mid, l, r);
    int p2 = query(2*node+1, mid+1, hi, l, r);
    return max(p1,p2); 
}
	
	
	
	/*
	Seg Tree
	*/
void update(ll node, ll lo, ll hi, ll idx, ll val,vector<ll> &A,vector<ll> &tr)
/* node --1 array start --1 array end --n 
index to update --idx val to assign --val
the arr --A the tree --tr
*/

{
    if(lo == hi){
        A[idx] = val;
        tr[node] = val;
    }
    else{
        ll mid = (lo + hi) / 2;
        if(lo <= idx and idx <= mid){
            update(2*node, lo, mid, idx, val,A,tr);}
        else{
            update(2*node+1, mid+1, hi, idx, val,A,tr);}
       tr[node] = tr[2*node] + tr[2*node+1];
    }
}
ll query(ll node, ll lo, ll hi, ll l, ll r,vector<ll> &tr)
/* node --1 array start --1 array end --n 
start indx of query --l and end index --r
the tree --tr
*/
{
    if(r < lo or hi < l)
		return 0;
    if(l <= lo and hi <= r)
		return tr[node];
    ll mid = (lo + hi) / 2;
    ll p1 = query(2*node, lo, mid, l, r,tr);
    ll p2 = query(2*node+1, mid+1, hi, l, r,tr);
    return p1+p2; 
}

///*********Dikstra**************/

#define F first
#define S second
vector < vector<pair < ll , ll >> > res;
vector<ll> dist;
void dikstr(ll fro){
    dist[fro] = 0;
    priority_queue < pair<ll,ll>, 
		vector < pair<ll,ll> >, greater < pair<ll,ll> > > ms;        
    ms.push({0 , fro});                         

    while(!ms.empty()){

        auto nw = ms.top();        
        ms.pop();

        int node = nw.S;
        if(dist[node]< nw.F ) continue;                  

        for(auto pr:res[node]){
            ll e = pr.F; ll w = pr.S;
            if(max(dist[node] , w) < dist[e]  ){            
   
                dist[e] = max(dist[node] , w);
                ms.push({dist[e],  e} );          
            }
        }
    }
}
////////////////////////////////

///**********kruska**************
vector<int> ufi;int n;
vector<pair<int,pair<int,int>>> Edg;
int get(int u){
	if(ufi[u]!=u) 
		ufi[u]=get(ufi[u]);
	return ufi[u];
}
void uni(int u,int v){
	u=get(u),v=get(v);
	ufi[u]=v;
}
int kruska(int mxOrmn){
	int cost=0;
	ufi= vector<int> (n+1,0);
	for(int u=0;u<=n;u++) ufi[u]=u;
	if(mxOrmn) sort(Edg.begin(),Edg.end());
	else sort(Edg.rbegin(),Edg.rend());
	for(auto x:Edg){
		if(get(x.S.F)!=get(x.S.S))
			cost+=x.F,uni(x.S.F,x.S.S);
	}return cost;
}
///////////////////////////////////////
///****************Matrix exponentiaion/////////////////

#include<bits/stdc++.h>
using namespace std;
using ll= long long;
const float PI = acos(-1);
#define SZ 100000 + 1
#define F first
#define S second
vector<ll> ls;
typedef struct{
		ll v[2][2];
	} Mat;
Mat entu(Mat a,Mat b,ll M){
	Mat ha;
		ha.v[0][0]=(2*M+(a.v[0][0]*b.v[0][0])%M+(a.v[0][1]*b.v[1][0])%M)%M
		,ha.v[0][1]=(2*M+(a.v[0][0]*b.v[0][1])%M+(a.v[0][1]*b.v[1][1])%M)%M;
		ha.v[1][0]=(2*M+(a.v[1][0]*b.v[0][0])%M+(a.v[1][1]*b.v[1][0])%M)%M,
		ha.v[1][1]=(2*M+(a.v[1][0]*b.v[0][1])%M+(a.v[1][1]*b.v[1][1])%M)%M;
	return ha;
}
Mat bigmoMatrx(Mat b,ll ex, ll M) {
	Mat an=b,rema= b;
	ex--;
	while(ex!=0){
		if(ex%2==1)	an = entu(rema,an,M);
		rema=entu(rema,rema,M),ex/=2;                                                                     
	}
	return an;}

int main(){ios_base::sync_with_stdio(false);
cin.tie(NULL);//freopen("inp", "r", stdin);
int tt=1;//cin>>tt;
for(int _t=1;_t<=tt;_t++){
	ll a,b,n,md=1000000007;
	cin>>a>>b>>n;
	Mat ha;
	/*
	 *  [ 1 -1] * [  f(i) ] == [f(i+1)]
	 * 	[ 1 0]  * [f(i-1) ] == [f(i)]
	 *  [ 1 -1] ^k * [  f(i) ] == [f(i+k)]
	 * 	[ 1 0]     * [f(i-1) ] == [f(i+k-1)]
	 */
	ha.v[0][0]=1,ha.v[0][1]=-1;
	ha.v[1][0]=1,ha.v[1][1]=0;
	if(n==1) cout<<(a+md)%md;
	else if(n==2) cout<<(b+md)%md;
	else{
		 ha=bigmoMatrx(ha,n-2,md);
		 cout<<((b*ha.v[0][0])%md 
			+(a*ha.v[0][1])%md+md+md)%md;
	 }
}}


/////////////////////////////////////
