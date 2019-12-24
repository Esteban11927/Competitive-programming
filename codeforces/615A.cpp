#include<iostream>
using namespace std;
bool on[101], ans = true;
int main(){
    int n, m, x, y;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> x;
        for(int j = 0; j < x; j++){
            cin >> y;
            on[y] = true;
        }
    }
    for(int i = 1; i <= m; i++) if(on[i] == false) ans = false;
    if(ans) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}