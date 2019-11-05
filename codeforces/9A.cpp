#include<iostream>
using namespace std;
int main(){
    int y, w, x, p;
    cin >> y >> w;
    x = max(y, w);
    p = 1 + 6 - x;
    if(p == 1) cout << "1/6\n";
    if(p == 2) cout << "1/3\n";
    if(p == 3) cout << "1/2\n";
    if(p == 4) cout << "2/3\n";
    if(p == 5) cout << "5/6\n";
    if(p == 6) cout << "1/1\n";
    return 0;
}