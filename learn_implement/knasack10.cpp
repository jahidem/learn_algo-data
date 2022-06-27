#include<bits/stdc++.h>
using namespace std;
int dp[1003][1003];
int n;
int price[1001],wight[1001];
int knapsack(int pos,int rem_capacity)
{
    if(pos>=n) return 0;
    else if(dp[pos][rem_capacity]!=-1)
        return dp[pos][rem_capacity];

    int cal= knapsack(pos+1,rem_capacity);
    if(rem_capacity>=wight[pos])
        cal = max(cal, price[pos]+
                  knapsack(pos+1,rem_capacity-wight[pos]));
    return dp[pos][rem_capacity] = cal;
}
int main()
{
    int capacity;
    cin>>n>>capacity;
    for(int u=0; u<n; u++)
        cin>>wight[u]>>price[u];
    memset(dp,-1,sizeof dp);
    cout<<knapsack(0,capacity)<<endl;

}
