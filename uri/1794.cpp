#include<iostream>
using namespace std;
int main(){
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    if((a <= n && n <= b) && (c <= n && n <= d)){
        cout << "possivel\n";
    }
    else cout << "impossivel\n";
    return 0;
}