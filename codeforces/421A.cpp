#include<iostream>
using namespace std;
int arr[200];
int main(){
    int n, a, b, x;
    cin >> n >> a >> b;
    for(int i = 0; i < a; i++){
        cin >> x;
        arr[x] = true;
    }
    for(int i = 0; i < b; i++) cin >> x;
    for(int i = 1; i <= n; i++){
        if(arr[i]) cout << "1 ";
        else cout << "2 ";
    }
    cout << '\n';
    return 0;
}