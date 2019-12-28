#include<iostream>
using namespace std;
int main(){
    int x, y, z, t1, t2, t3, n, m;
    cin >> x >> y >> z >> t1 >> t2 >> t3;
    if((abs(x-z)+abs(y-x))*t2 + t3*3 <= t1*abs(x-y)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}