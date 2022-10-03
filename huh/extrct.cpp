#include<bits/stdc++.h>
using namespace std;
int main(){
   freopen("alldist.txt", "r", stdin);
   freopen("alldist2.txt", "w", stdout);
  map<string,int> mp;
    string s;
    vector<string> ls;
    ls.push_back("Amtali");
    while(getline(cin,s)){
      if('0'<=s[0]&&s[0]<='9'){
        stringstream sa(s);
        int a;
        string b;

        sa>>a>>b;
        if(!mp[b]){
        mp[b]=1;
        ls.push_back(b);
        }
      }
    }
    sort(ls.begin(),ls.end());
    for(auto x:ls)
      cout<<"\""+x+"\",\n";

}