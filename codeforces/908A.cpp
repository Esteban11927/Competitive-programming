#include<iostream>
using namespace std;
int main(){
    char c;
    int cont = 0;
    while(cin >> c){
        if(c == '1' || c == '3' || c == '5' || c == '7' || c == '9' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') cont++;
    }
    cout << cont << '\n';
    return 0;
}