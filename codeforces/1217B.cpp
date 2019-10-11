#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    cout << fixed << setprecision(0);
    int t, n, x, d, h; cin >> t;
    while(t--){
        int ans = 2e9, temp = 2e9;
        cin >> n >> x;
        vector<int> vec;
        while(n--){
            cin >> d >> h;
            if(d >= x) ans = 0;
            temp = min(temp, h - d);
        }
        if(ans == 0) cout << "0\n";
        else if(temp >= 0) cout << "-1\n";
        else cout << ceil(1.0*x / abs(temp)) << '\n';
    }
    return 0;
}