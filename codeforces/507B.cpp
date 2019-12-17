#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double r, x, y, xx, yy;
    cin >> r >> x >> y >> xx >> yy;
    cout << ceil(sqrt(abs(y-yy)*abs(y-yy) + abs(x-xx)*abs(x-xx)) / (2*r)) << '\n';
    return 0;
}