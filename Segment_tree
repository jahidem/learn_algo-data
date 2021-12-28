#include<bits/stdc++.h>
using namespcae std;

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
