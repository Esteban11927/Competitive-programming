#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool ans = true;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(abs(arr[i]-arr[j])%2 == 1) ans = false;
            }
        }
        cout << (ans == true ? "YES\n" : "NO\n");
    }
    return 0;
}