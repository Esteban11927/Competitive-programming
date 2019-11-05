#include<iostream>
using namespace std;
int main(){
    int n, ans;
    double x;
    cin >> n;
    while(n--){
        cin >> x;
        ans = 0;
        while(x > 1){
            ans++;
            x /= 2.0;
        }
        cout << ans << " dias\n";
    }
    return 0;
}