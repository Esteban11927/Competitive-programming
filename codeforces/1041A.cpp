#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 1; i < n; i++){
        sum += arr[i] - arr[i-1] - 1;
    }
    cout << sum << '\n';
    return 0;
}