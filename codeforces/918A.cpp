#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 1, c = 1, n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(i == c){
            cout << 'O';
            a = b; b = c; c = a+b;
        }
        else cout << 'o';
    }
    cout << '\n';
    return 0;
}