#include<iostream>
#include<string.h>
using namespace std;
const int tam = 1e5+1;
long long arr[tam];
int main(){
    int n, x;
    cin >> n;
    for(int i =0 ; i < n; i++){
        cin >>x;
        arr[x] += x;
    }
    for(int i = 2; i <= tam; i++){
        arr[i] = max(arr[i-1], arr[i]+arr[i-2]);
    }
    cout << arr[tam] << '\n';
}