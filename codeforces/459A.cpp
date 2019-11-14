#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if((x1 != x2 && y1 != y2) && (double)abs(y2-y1) / (double)abs(x2-x1) != 1){
        cout << "-1\n";
        return 0;
    }
    if(y1 == y2){
        cout << x1 << ' ' << y1 - abs(x2 - x1) << ' ';
        cout << x2 << ' ' << y1 - abs(x2 - x1) << '\n';
    }
    if(x1 != x2 && y1 != y2){
        cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << '\n';
    }
    if(x1 == x2){
        cout << x1 + abs(y2 - y1) << ' ' << y1 << ' ';
        cout << x1 + abs(y2 - y1) << ' ' << y2 << '\n';
    }
    return 0;
}