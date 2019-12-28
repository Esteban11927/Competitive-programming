#include<iostream>
using namespace std;
int main(){
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    cout << (h1+h2+2)*(w1+2) - (h1+h2)*(w1) << '\n';
    return 0;
}