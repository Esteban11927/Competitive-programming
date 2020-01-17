#include<iostream>
using namespace std;
int main(){
    long long int n, k;
    cin  >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    n = 0;
    while(((n)*(n+1))/2 < k) n++;
    cout << arr[k - (n-1)*(n)/2 - 1] << '\n';
    return 0;
}