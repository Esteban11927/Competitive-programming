#include<iostream>
#include<algorithm>
using namespace std;

bool compare(const int a, const int b){
    return a > b;
}

int main(){
    int n, m, sum = 0, i;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n, compare);
    for(i = 0; i < n; i++){
        sum += arr[i];
        if(sum >= m) break;
    }
    cout << i+1 << '\n';
    return 0;
}