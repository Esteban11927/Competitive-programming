#include<iostream>
using namespace std;
int main(){
    int n, cont = 9;
    cin >> n;
    while(n > 9){
        n++;
        while(n%10 == 0) n /= 10;
        cont++;
    }
    cout << cont << '\n';
    return 0;
}