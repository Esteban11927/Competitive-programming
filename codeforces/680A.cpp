#include<iostream>
using namespace std;
int arr[101];
int main(){
    int x, sum = 0, ans = 1e9;
    for(int i = 0; i < 5; i++){
        cin >> x;
        sum += x;
        arr[x]++;
    }
    for(int i = 1; i <= 100; i++){
        if(arr[i] >= 2) ans = min(ans, sum-i*min(3, arr[i]));
    }
    cout << min(ans, sum) << '\n';
    return 0;
}