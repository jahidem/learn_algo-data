
/*in the name of Allah the most beneficent the most merciful.*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 1e18
#define MIN -1e18
#define MOD 1000000007
//#define mod2 20071027
//#define MOD 998244353
#define base 139
//#define mod 1000074259
#define base2 31
#define memz(a) memset(a, 0, sizeof(a))
#define memn(a) memset(a, -1, sizeof(a))
#define in1(a) scanf("%lld", &a)
#define in2(a, b) scanf("%lld%lld", &a, &b)
#define TC(c) printf("Case #%lld: ", ++c)
#define out(x) cout << #x << " -> " << x << endl;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define FILE   freopen("input.txt", "r", stdin);  freopen("out.txt", "w", stdout);
using namespace std;
const ll N = 1010, M = 1000000;
ll t, n, m, a, b;

int solve()
{
    in1(t);
    while(t--)
    {
        in1(n);
        ll f=0, com=0;
        for(int i=0;i<n;i++)
        {
            in1(a);
            if(com) continue;
            if(a==1)
                f^=1;
            else com=1;
        }
        if(com==0) f^=1;
        if(f==0) printf("First\n");
        else printf("Second\n");
    }
    return 0;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    return solve();
}
/*

*/
