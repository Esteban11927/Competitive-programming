#include<iostream>
#include<set>
#include<utility>
#include<math.h>
using namespace std;

int gcd(int x, int y){
    if(fmod(x, y) == 0) return y;
    return gcd(y, fmod(x, y));
}

int main(){
    double n, x0, y0, x, y, aux = 0;
    set <double> slopes;
    cin >> n >> x0 >> y0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        x -= x0;
        y -= y0;
        if(x == 0) aux = 1;
        else slopes.insert(y/x);
    }
    cout << slopes.size() + aux << '\n';
    return 0;
}