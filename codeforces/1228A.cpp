#include<iostream>
#include<string.h>
using namespace std;
int howmanydifferentdigits(int n, int q){
    int arr[10], cont = 0;
    for(int i = 0; i < 10; i++) arr[i] = false;
    for(int i = 0; i < q; i++){
        if(arr[n%10] == false){
            arr[n%10] = true;
            cont++;
        }
        n/=10;
    }
    return cont;
}
int main(){
    int l, r;
    cin >> l >> r;
    if(l < 10){
        cout << l << '\n';
        return 0;
    }
    for(int i = l; i <= r; i++){
        if(1e1 <= i && i <= 1e2-1){
            if(howmanydifferentdigits(i, 2) == 2){
                cout << i << '\n';
                return 0;
            }
        }
        if(1e2 <= i && i <= 1e3-1){
            if(howmanydifferentdigits(i, 3) == 3){
                cout << i << '\n';
                return 0;
            }
        }
        if(1e3 <= i && i <= 1e4-1){
            if(howmanydifferentdigits(i, 4) == 4){
                cout << i << '\n';
                return 0;
            }
        }
        if(1e4 <= i && i <= 1e5-1){
            if(howmanydifferentdigits(i, 5) == 5){
                cout << i << '\n';
                return 0;
            }
        }
        if(1e5 <= i && i <= 1e6-1){
            if(howmanydifferentdigits(i, 6) == 6){
                cout << i << '\n';
                return 0;
            }
        }
    }
    cout << "-1\n";
}