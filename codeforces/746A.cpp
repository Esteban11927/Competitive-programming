#include<iostream>
using namespace std;
int main(){
    int a, b, c, i = 0;
    cin >> a >> b >> c;
    for(i = 0; (i <= 251 && i <= a && 2*i <= b && 4*i <= c) ; i++){}
    i--;
    cout << i + 2*i + 4*i << '\n';
    return 0;
}