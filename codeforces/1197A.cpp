#include<iostream>
#include<algorithm>
using namespace std;
bool compare(const int a, const int b){
    return a > b;
}
int main(){
    int t, n, base;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n, compare);
        base = arr[1];
        cout << min(base-1, n-2) << '\n';
    }
    return 0;
}