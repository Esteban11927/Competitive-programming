#include<iostream>
using namespace std;
int main(){
    int n, m, r, x, mi = 1e9, Ma = 0;
    cin >> n >> m >> r;
    for(int i = 0; i < n; i++){
        cin >> x;
        mi = min(x, mi);
    }
    for(int i = 0; i < m; i++){
        cin >> x;
        Ma = max(Ma, x);
    }
    cout << max(r, (r - (r/mi)*mi) + (Ma*(r/mi))) << '\n';
    return 0;
}