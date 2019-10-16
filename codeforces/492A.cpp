#include<iostream>
using namespace std;
int main(){
    int n, cont = 1, val = 0, ans = 0;
    cin >> n;
    while(n > 0){
        val += cont;
        n -= val;
        cont++;
    }
    if(n >= 0) cout << cont-1 << '\n';
    else cout << cont-2 << '\n';
    return 0;
}