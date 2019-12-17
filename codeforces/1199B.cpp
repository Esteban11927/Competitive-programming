#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long double h, l;
    cin >> h >> l;
    cout << fixed << setprecision(20);
    cout << (l*l - h*h) / (2*h) << '\n';
    return 0;
}