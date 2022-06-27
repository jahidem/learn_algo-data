#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a,pair<int,int> &b)
{
    return a.first*b.second < a.second*b.first;
}
int main()
{
    vector<pair<int,int>> v;
    int n,k;
    cin>>n>>k;
    vector<int> W(n),P(n);
    for(int u=0; u<n; u++)
    {
        cin>>W[u]>>P[u];
        v.push_back({W[u],P[u]});
    }
    int ans=0;
    sort(v.begin(),v.end(),comp);
    for(auto x:v)
        cout<<x.first<<" "<<x.second<<"\n";

    for(int u=0; u<n; u++)
    {
        int mn=min(k,v[u].first);
        k-=mn;
        ans+=mn*v[u].second/v[u].first;
    }
    cout<<ans;
}
/*
5 20
4 80
5 60
12 30
11 55
2 110
*/
