#include<iostream>
using namespace std;
int main(){
    int n, p, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
        cin >> arr[i];
    }
    cin >> p;
    for(i = 0; i < n; i++){
        if(p <= arr[i]) break;
    }
    cout << n - i << '\n';
    return 0;
}