#include<iostream>
using namespace std;
int evaluate(int n){
    if(n > 0 && n < 10) return n;
    if(n == 0) return 0;
    return n/10*10 + evaluate(n/10+n%10);
}
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        cout << evaluate(n) << '\n';
    }
    return 0;
}