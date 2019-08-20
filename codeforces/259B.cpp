#include<iostream>
using namespace std;
int main(){
    int x, a, b, c, y, d, e, f, z, sum = 0;
    cin >> x >> a >> b >> c >> y >> d >> e >> f >> z;
    sum = (x + a + b + c + y + d + e + f + z) / 2;
    x = sum - a - b;
    y = sum - c - d;
    z = sum - e - f;
    cout << x << ' ' << a << ' ' << b << '\n';
    cout << c << ' ' << y << ' ' << d << '\n';
    cout << e << ' ' << f << ' ' << z << '\n';

    return 0;
}