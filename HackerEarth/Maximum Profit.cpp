#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n, x;
    cin >> n >> x;
    int arr1[n], arr2[n];
    long long memo1[n], memo2[n];
    
    memset(memo1, 0, sizeof memo1);
    memset(memo2, 0, sizeof memo2);

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++){
        cin >> arr2[i];
    }
    
    memo1[0] = max(arr1[0], arr2[0] - x);
    memo2[0] = max(arr2[0], arr1[0] - x);

    for(int i = 1; i < n; i++){
        memo1[i] = max(memo1[i-1] + arr1[i], memo2[i-1] + arr1[i] - x);
        memo2[i] = max(memo2[i-1] + arr2[i], memo1[i-1] + arr2[i] - x);
    }

    cout << max(memo1[n-1], memo2[n-1]) << '\n';
    
    return 0;
}