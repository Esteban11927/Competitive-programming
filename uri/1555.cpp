#include<iostream>
using namespace std;

string func(int x, int y){
    if(9*x*x+y*y > 2*x*x+25*y*y && 9*x*x+y*y > -100*x+y*y*y) return "Rafael ganhou";
    if(2*x*x+25*y*y > 9*x*x+y*y && 2*x*x+25*y*y > -100*x+y*y*y) return "Beto ganhou";
    return "Carlos ganhou";
}

int main(){
    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        cout << func(x, y) << '\n';
    }
    return 0;
}