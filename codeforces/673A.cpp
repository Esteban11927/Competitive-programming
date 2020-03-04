#include<iostream>
using namespace std;
int arr[100];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arr[i];
    arr[n+1] = 200;
    for(int i = 0; i <= n; i++){
        if(arr[i+1] - arr[i] > 15){
            cout << min(90, 15+arr[i]) << '\n';
            return 0;
        }
    }
    return 0;
}