#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << (char)('a' + ((i/2)%2));
    }
    cout << '\n';
    return 0;
}