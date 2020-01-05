#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double t, a, b, l;
    cin >> l >> a >> b;
    t = l / (a+b);
    cout << fixed << setprecision(10) << a*t << '\n';
    return 0;
}