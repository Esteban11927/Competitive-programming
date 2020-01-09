#include<iostream>
using namespace std;
int main(){
    long long int n, l, r, mi = 0, ma = 0, cont = 2;
    cin >> n >> l >> r;
    mi = n-l+1;
    for(int i = 0; i < l-1; i++){
        mi += cont;
        cont *= 2;
    }
    cont = 1;
    for(int i = 0; i < r; i++){
        ma += cont;
        cont *= 2;
    }
    cont /= 2;
    for(int i = 0; i < n-r; i++){
        ma += cont;
    }
    cout << mi << ' ' << ma << '\n';
    return 0;
}