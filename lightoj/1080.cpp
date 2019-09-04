#include<iostream>
#include<string.h>
using namespace std;
int si;
void build(int node, int start, int end, string &s, int *tree){
    if(start == end){
        tree[node] = (int)(s[start-1] - '0');
    }
    else{
        int mid = (start + end) / 2;
        build(2*node, start, mid, s, tree);
        build(2*node+1, mid+1, end, s, tree);
    }
}
 
 
void update(int node, int start, int end, int l, int r, string &s, int *tree){
    if(start > r || end < l){
        return;
    }
    if(l <= start && end <= r){
        tree[node]++;
    }
    else{
        int mid = (start + end) / 2;
        update(2*node, start, mid, l, r, s, tree);
        update(2*node+1, mid+1, end, l, r, s, tree);
    }
}
 
int query(int node, int start, int end, int x, int *tree){
    if(start == end && start == x){
        return tree[node];
    }
    if(start != end && end < si){
        tree[2*node] += tree[node];
        tree[2*node+1] += tree[node];
        tree[node] = 0;
    }
    int mid = (start + end) >> 1;
    if(start <= x && x <= mid){
        return query(2*node, start, mid, x, tree);
    }
    else{
        return query(2*node+1, mid+1, end, x, tree);
    }
}
 
int main(){
    int t, n, l, r, x;
    string s;
    char c;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cout << "Case " << i << ":" << '\n';
        cin >> s;
        si = 4*s.size()+5;
        int tree[4*s.size()+5];
        for(int j = 0; j < 4*s.size()+5; j++) tree[j] = 0;
        build(1, 1, s.size(), s, tree);
        scanf("%i", &n);
        while(n--){
            scanf("%s", &c);
            if(c == 'I'){
                scanf("%i %i", &l, &r);
                update(1, 1, s.size(), l, r, s, tree);
            }
            else{
                scanf("%i", &x);
                int ans = query(1, 1, s.size(), x, tree) % 2;
                cout << ans << '\n';
            }
        }
    }
    return 0;
}