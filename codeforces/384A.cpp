#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << (n*n)/2 + (n%2 == 1 ? 1 : 0) << '\n';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i%2 == j%2) cout << 'C';
            else cout << '.';
        }
        cout << '\n';
    }
    return 0;
}