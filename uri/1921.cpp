#include<iostream>
using namespace std;
const int tam = 1e5+1;
long long arr[tam];
int main(){
    int n;
    arr[3] = 0;
    for(int i = 4; i < tam; i++){
        arr[i] = arr[i-1] + i - 2;
    }
    cin >> n;
    cout << arr[n] << '\n';
    return 0;
}