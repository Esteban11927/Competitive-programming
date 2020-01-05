#include<iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int x = e*min(a, d) + f*min(b, min(c, d - min(a, d)));
    int y = f*min(b, min(c, d)) + e*min(a, d - min(b, min(c, d)));
    cout << max(x, y) << '\n';
    return 0;
}