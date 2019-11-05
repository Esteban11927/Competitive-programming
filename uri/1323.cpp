#include<iostream>
using namespace std;
int main(){
    int n, arr[101];
    arr[1] = 1;
    for(int i = 2; i <= 100; i++){
        arr[i] = arr[i-1] + i*i;
    }
    while(cin >> n){
        if(!n) break;
        cout << arr[n] << '\n';
    }
    return 0;
}