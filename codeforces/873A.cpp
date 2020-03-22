#include<iostream>
using namespace std;
int arr[200];

int sumat(int x){
    int sum = 0;
    for(int i = 0; i <= x; i++) sum += arr[i];
    return sum;
}

int main(){
    int n, k, x;
    cin >> n >> k >> x;
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << k*x+sumat(n-k-1) << '\n';
    return 0;
}