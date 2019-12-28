#include<iostream>
using namespace std;
int main(){
    int n, x, a, b, t;
    cin >> t;
    while(t--){
        cin >> n >> x >> a >> b;
        if(a > b) swap(a, b);
        while(a != 1 && x){
            x--;
            a--;
        }
        while(b != n && x){
            x--;
            b++;
        }
        cout << b-a << '\n';
    }
    return 0;
}