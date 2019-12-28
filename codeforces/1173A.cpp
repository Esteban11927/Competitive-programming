#include<iostream>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    if(x == y && z == 0) cout << "0\n";
    else if(x > y+z) cout << "+\n";
    else if(y > x+z) cout << "-\n";
    else if(x+z >= y && y+z >= y) cout << "?\n";
    return 0;
}