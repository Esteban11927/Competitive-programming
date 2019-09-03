#include<iostream>
using namespace std;
int main(){
    int n, lowest = 2e9, greatest = -1;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        lowest = min(lowest, arr[i]);
        greatest = max(greatest, arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == greatest){
            greatest = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(arr[i] == lowest){
            lowest = i;
            break;
        }
    }
    if(lowest < greatest) cout << greatest + abs(n-1 - lowest) - 1 << '\n';
    else cout << greatest + abs(n-1 - lowest) << '\n';
    return 0;
}