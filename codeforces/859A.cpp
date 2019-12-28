#include<iostream>
using namespace std;
int main(){
    int n, x, m = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        m = max(m, x);
    }
    cout << max(0, m-25) << '\n';
    return 0;
}