#include<iostream>
using namespace std;
int main(){
    int n, q;
    cin >> q;
    while(q--){
        cin >> n;
        if(n == 1){
            cout << '3' << '\n';
            continue;
        }
        if(n == 2){
            cout << '2' << '\n';
            continue;
        }
        if(n%2 == 0){
            cout << '0';
        }
        else cout << '1';
        cout << '\n';
    }
    return 0;
}