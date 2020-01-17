#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    char a, b;
    cin >> a >> y1 >> b >> y2;
    x1 = (a-'a')+1;
    x2 = (b-'a')+1;
    cout << max(abs(x1-x2), abs(y1-y2)) << '\n';
    while(x1 != x2 || y1 != y2){
        if(x1 < x2){cout << "R"; x1++;}
        if(x1 > x2){cout << "L"; x1--;}
        if(y1 > y2){cout << "D"; y1--;}
        if(y1 < y2){cout << "U"; y1++;}
        cout << "\n";
    }
    return 0;
}