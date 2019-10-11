#include<iostream>
using namespace std;
int st[4 * 100000 + 200];
String s;
void build(int node, int l, int r){
    if(l == r){
        st[node] = s[l];
    }
    else{
        int mid = (l + r) / 2;
        build(2*node, l, mid);
        build(2*node+1, mid + 1, r);
        st[node] = st[2*node] + st[2*node + 1];
    }
}
int main(){
    cin >> s;
    build(1, 1, s.size());
    cout << st[1] << '\n';
    return 0;
}