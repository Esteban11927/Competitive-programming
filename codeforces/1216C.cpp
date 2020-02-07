#include<iostream>
using namespace std;
int main(){
    long long int x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = 0; i < 2; i++){
        cin >> x3 >> y3 >> x4 >> y4;
        if(x3 <= x1 && x4 >= x2){
            if(y3 <= y1) y1 = max(y1, y4);
            if(y4 >= y2) y2 = min(y2, y3);
        }
        if(y3 <= y1 && y4 >= y2){
            if(x3 <= x1) x1 = max(x1, x4);
            if(x4 >= x2) x2 = min(x2, x3);
        }
    }
    cout << ((x1 < x2 && y1 < y2) ? "YES\n" : "NO\n");
    return 0;
}