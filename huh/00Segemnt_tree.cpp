#include<bits/stdc++.h>
using namespace std;
#define MAXN 1e5;
vector<ll> tr(MAXN);

void build(vector<int> &ls,int node,int be,int en){
  if(be==en)
    tr[node] = ls[be];
   else{
    int mid = (be+en) / 2;
    build(ls,2*node,be,mid);
    build(ls,2*node+1,mid+1,en);
    tr[node] = t[2*node] + tr[2*node +1];
   }
}

int query(int node,int be,int en,int ql,int qr){
  if(ql>qr)
    return 0;
  else if(be==ql && en==ql)
    return tr[node];
  int mid = (be+en) / 2;
  return query(node*2 , be , mid , ql , min(qr,mid))
        +query(node*2 +1, mid+1 , en , max(ql,mid+1) , qr); 
}

int update(int v, int be,int en, int pos, int val){
  if(be==en)
    tr[be] =val;
  else{
    int mid =(be+en) /2;
    if(pos<=tm)
      update(2*node,be,tm,pos,val);
    else 
      update(2*node + 1,tm+1,en,pos,val);

    tr[node] = tr[2*node] + tr[2*node +1];
  }
}