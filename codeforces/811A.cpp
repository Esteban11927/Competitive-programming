#include<iostream>
using namespace std;
int main(){
    int a, b, cont = 1;
    cin >> a >> b;
    while(a >= 0 && b >= 0){
        if(cont%2) a -= cont;
        else b -= cont;
        cont++;
    }
    if(a < 0) cout << "Vladik\n";
    else cout << "Valera\n";
    return 0;
}