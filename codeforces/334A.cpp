#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a = 1, b = n*n;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n/2; i++){
            cout << a << ' ' << b-a+1 << ' ';
            a++;
        }
        cout << '\n';
    }
    return 0;
}