#include<iostream>
#include<algorithm>
using namespace std;

bool valid(int a, int b, int c){
    if(a+b > c && a+c > b && b+c > a) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n-2; i++){
        if(valid(arr[i], arr[i+1], arr[i+2])){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}