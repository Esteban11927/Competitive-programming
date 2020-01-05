#include<iostream>
using namespace std;
int main(){
    long long int a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;
    a -= x*2;
    a -= y;
    b -= y;
    b -= 3*z;
    cout << (a < 0 ? a*-1 : 0) + (b < 0 ? b*-1 : 0) << '\n';
    return 0;
}