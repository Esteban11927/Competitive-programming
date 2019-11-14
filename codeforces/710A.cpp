#include<iostream>
using namespace std;
int main(){
    char c, d;
    cin >> c >> d;
    if((c=='a' && (d == '8' || d == '1')) || (c=='h' && (d == '8' || d == '1'))) cout << '3';
    else if(c == 'a' || c == 'h' || d == '1' || d == '8') cout << '5';
    else cout << '8';
    cout << '\n';
    return 0;
}