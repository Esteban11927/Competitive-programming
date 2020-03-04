#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b, c, x, y, z;
    cin >> a >> b >> c;
    x = (a-c+b)/2;
    y = (c-a+b)/2;
    z = (c-b+a)/2;
    if(x >= 0 && y >= 0 && z >= 0 && (a+b+c)%2 == 0)
        cout << x << ' ' << y << ' ' << z << '\n';
    else cout << "Impossible\n";
    return 0;
}