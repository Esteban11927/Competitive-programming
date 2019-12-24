#include<iostream>
using namespace std;
int main(){
    int n, k = 0, sum = 0, x;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> x;
        k = max(x, k);
        sum += x;
    }
    while(k*n - sum <= sum) k++;
    cout << k << '\n';
    return 0;
}