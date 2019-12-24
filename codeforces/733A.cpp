#include<iostream>
using namespace std;
int main(){
    char c;
    int cont = 0, maximum = 0;
    while(cin >> c){
        if(c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U' && c != 'Y') cont++;
        else cont = 0;
        maximum = max(cont, maximum);
    }
    cout << maximum + 1 << '\n';
    return 0;
}