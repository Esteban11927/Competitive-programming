#include<iostream>
using namespace std;
const int nmax = 1e5 + 25;
long long arr[nmax];
long long st[4*nmax];

long long query(int fl, int fr, int node, int l, int r){
    cout << l << ' ' << r << '\n';
    if(l == r){
        return st[node] = arr[l];
    }
    if(r < fl || l > fr || l > r){
        return 0;
    }
    return st[node] = query(fl, fr, 2*node + 1, (l+r)/2+1, r) + query(fl, fr, 2*node, l, (l+r)/2);
}

int main(){
    int n, m, op, l, r;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < m; i++){
        cin >> op;
        if(op == 1){
            cin >> l >> r;
            cout << query(l, r, 1, 1, 4*nmax) << '\n';
            cout << st[1] << '\n'; 
        }
    }
    return 0;
}