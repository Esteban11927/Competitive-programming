#include<iostream>
using namespace std;
int w[1000];
int main(){
    int white = 0, black = 0;
    char x;
    w['Q'] = 9;    w['q'] = 9;
    w['R'] = 5;    w['r'] = 5;
    w['B'] = 3;    w['b'] = 3;
    w['N'] = 3;    w['n'] = 3;
    w['P'] = 1;    w['p'] = 1;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> x;
            white += ('A' <= x && x <= 'Z' ? w[x] : 0);
            black += ('a' <= x && x <= 'z' ? w[x] : 0);
        }
    }
    if(white > black) cout << "White\n";
    if(black > white) cout << "Black\n";
    if(white == black) cout << "Draw\n";
    return 0;
}