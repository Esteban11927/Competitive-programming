#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    double ans = 0;
    cin >> n;
    for(double i = 1; i <= n; i++){
        ans += (1.0)/i;
    }
    cout << fixed << setprecision(10) << ans << '\n';
    return 0;
}