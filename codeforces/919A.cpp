#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double n, m, a, b, ans = 1e9;
    cin >> n >> m;
    while(n--){
        cin >> a >> b;
        ans = min(a/b*m, ans);
    }
    cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}