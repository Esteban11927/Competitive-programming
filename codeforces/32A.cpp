#include<iostream>
using namespace std;
int main(){
    int n, d, ans = 0;
    cin >> n >> d;
    int arr[n];
    for(int &c : arr){
        cin >> c;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j) if(abs(arr[i] - arr[j]) <= d) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}