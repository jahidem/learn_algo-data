#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  // freopen("inp", "r", stdin);
  ll T = 1; // cin>>T;
  for (ll _t = 1; _t <= T; _t++)
  {
    int n;
    cin >> n;
    vector<int> ls(n);
    vector<vector<int>> agpr;
    for (int &x : ls)
      cin >> x;
    int pre = ls[0], cn = 0, seg = 0;
    priority_queue<pair<int, int>> Q;
    for (int x : ls)
    {
      if (pre == x)
        cn++;
      else
      {
        agpr.push_back({seg - 1, seg + 1, pre, cn});
        Q.push({cn, seg});
        cn = 1;
        seg++;
      }
      pre = x;
    }
    if (cn)
    {
      agpr.push_back({seg - 1, -1, ls[n - 1], cn});
      Q.push({cn, seg});
      seg++;
    }
    int an = 0;
    vector<int> vis(500005, 0);
    while (!Q.empty())
    {
      auto nw = Q.top().second;

      int prev = agpr[nw][0],
          ne = agpr[nw][1];
      //cout << prev << " " << ne << "\n";
      Q.pop();
      if (vis[nw])
        continue;

      if (ne == -1 && prev == -1)
      {
        an++;
        break;
      }
      else if (ne == -1 && prev != -1)
        agpr[prev][1] = -1;
      else if (prev == -1 && ne != -1)
        agpr[ne][0] = -1;
      else if (agpr[prev][2] != agpr[ne][2])
      {
        agpr[prev][1] = ne;
        agpr[ne][0] = prev;
      }
      else
      {
        vis[prev] = vis[ne] = 1;
        Q.push({agpr[ne][3] + agpr[prev][3],
                nw});
        agpr[nw]={agpr[prev][0], agpr[ne][1], agpr[ne][2],
                        agpr[ne][3] + agpr[prev][3]};
        
      }
      an++;
    }
    cout << an << "\n";
  }
}