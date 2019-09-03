#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, l, r;
    cin >> n;
    int arr[n+1];
    arr[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    cin >> q;
    while(q--){
        cin >> l >> r;
        cout << (arr[r] - arr[l-1]) / 10 << '\n';
    }
    return 0;
}