#include<iostream>
using namespace std;
int main(){
    int n, ans = 1e9, aux;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        aux = 0;
        for(int j = 0; j < n; j++){
            if(i != j){
                aux += abs(arr[i]-arr[j])%2;
            }
        }
        ans = min(ans, aux);
    }
    cout << ans << '\n';
    return 0;
}