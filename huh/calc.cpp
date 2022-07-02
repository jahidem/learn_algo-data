#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define file freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout)
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define all(s) s.begin(),s.end()
typedef long long ll;
typedef pair<ll,ll> pi;
typedef pair<pi,ll> pii;
vector<pi>x;
ll n;
ll lb(ll b[],ll m,ll l,ll r)
{
    ll status=-1;
    ll low=l,high=r;
    while(low<=high)
    {
        ll mid=(low+high)/2;
        if(b[mid]<=m)
        {
            status=mid;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return status;

}
ll dp(ll *d,ll pos,ll *b,ll limit)
{
    if(pos>n)return 0;
    if(pos==n)return 1;
    if(d[pos]!=-1)return d[pos];
    //if(limit>b[n])return 1;
    if(pos==0)return d[pos]=dp(d,pos+1,b,x[pos+1].second);
    ll y=lb(b,limit,pos,n);
    if(y==-1)return d[pos]=dp(d,pos+1,b,x[pos+1].second);
    return d[pos]=dp(d,y,b,x[y].second)+dp(d,y+1,b,x[y+1].second)+dp(d,pos+1,b,x[pos+1].second);
}
void solve()
{
    while(1)
    {
        x.clear();
        ll i,j,k;
        cin>>n;
        if(n==-1)break;
        //x.pb(make_pair(0,0));
        ll b[n+10];
        x.pb({0,0});
        b[0]=0;
        for(i=1;i<=n;i++)
        {
            ll p,q;
            cin>>p>>q;
            x.pb(make_pair(p,q));
            b[i]=p;

        }
        sort(x.begin(),x.end());
        sort(b,b+n+1);
        ll d[n+10];
        for(i=0;i<=n;i++)
        {
            d[i]=-1;
        }
        ll ans=0;
        for(i=1;i<=n;i++)
        {
            ans+=dp(d,i,b,x[i].second);
        }
        ans+=dp(d,0,b,0);
        cout<<ans<<"\n";
    }
}
int main()
{
    fast;
    solve();
}
