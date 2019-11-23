#include<iostream>
using namespace std;

int gcd(int x, int y){
    while(x%y){
        int aux = x%y;
        x = y;
        y = aux;
    }
    return y;
}

int main(){
    int a, b, n, cont = 0;
    cin >> a >> b >> n;
    while(n){
        if(cont%2 == 0) n -= gcd(max(n, a), min(n, a));
        else n -= gcd(max(n, b), min(n, b));
        cont++;
    }
    cout << ((cont%2)^1) << '\n';
    return 0;
}