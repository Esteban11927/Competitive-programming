#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    double a, b, n, x, y, v, ans = 1e9;
    cin >> a >> b >> n;
    ;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> v;
        ans = min(ans, sqrt((a-x)*(a-x) + (b-y)*(b-y)) / v);
    }
    cout << fixed << setprecision(20);
    cout << ans << '\n';
    return 0;
}