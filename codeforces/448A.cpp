#include<iostream>
using namespace std;
int main(){
    int a, a2, a3, b, b2, b3, n;
    cin >> a >> a2 >> a3 >> b >> b2 >> b3 >> n;
    a += a2 + a3;
    b += b2 + b3;
    while((a > 0 || b > 0) && n){
        if(a > 0){
            a -= 5;
            n--;
        }
        if(b > 0){
            b -= 10;
            n--;
        }
    }
    if(a > 0 || b > 0 || n < 0) cout << "NO\n";
    else cout << "YES\n";
    return 0;
}