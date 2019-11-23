#include<iostream>
using namespace std;
int main(){
    int x;
    char c;
    cin >> x >> x;
    while(cin >> c){
        if(c != 'W' && c != 'G' && c != 'B'){
            cout << "#Color\n";
            return 0;
        }
    }
    cout << "#Black&White\n";
    return 0;
}