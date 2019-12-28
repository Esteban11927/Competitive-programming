#include<iostream>
using namespace std;
const int tam = 1e7;
int arr[tam];
int main(){
    long long int n, x, in, ans = 0;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> in;
        ans += arr[in^x];
        arr[in]++;
    }
    cout << ans << '\n';
    return 0;
}