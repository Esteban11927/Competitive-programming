#include<iostream>
using namespace std;
int arr[1000];
int main(){
    int n, b = 2, a = 2;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cout << a << ' ';
        arr[a] = true;
        a += b;
        b++;
        a = a%n;
        if(a == 0) a++;
    }
    cout << '\n';
    return 0;
}