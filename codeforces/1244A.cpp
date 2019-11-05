#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double t, a, b, c, d, k, x, y;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d >> k;
        x = ceil(a / c);
        y = ceil(b / d);
        if(x + y <= k){
            cout << x << ' ' << y << '\n';
        }
        else cout << "-1\n";
    }
    return 0;
}