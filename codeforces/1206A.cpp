#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int A, B, a = 0, b = 0, x;
    cin >> A;
    while(A--){
        cin >> x;
        a = max(a, x);
    }
    cin >> B;
    while(B--){
        cin >> x;
        b = max(b, x);
    }
    cout << a << ' ' << b << '\n';
    return 0;
}