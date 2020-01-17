#include<iostream>
using namespace std;
int main(){
    long long int n, k, x = 0, ans = 0;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) arr[i] = i+1;
    for(int i = 0; i < min(n/2, k); i++) swap(arr[i], arr[n-i-1]);
    for(int i = 0; i < n; i++){
        ans += (arr[i] != i+1 ? arr[i]-1 : min(n/2, k));
    }
    cout << ans << '\n';
    return 0;
}