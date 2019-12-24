#include<iostream>
using namespace std;
int main(){
    int n, m, p = 0;
    cin >> n >> m;
    int c[n], a[m];
    for(int i = 0; i < n; i++) cin >> c[i];
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        if(a[p] >= c[i] && p < m) p++;
    }
    cout << p << '\n';
    return 0;
}