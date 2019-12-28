#include<iostream>
using namespace std;
int main(){
    int a, b, f = 0, d = 0, s = 0;
    cin >> a >> b;
    for(int i = 1; i <= 6; i++){
        if(abs(a-i) < abs(b-i))f++;
        if(abs(b-i) < abs(a-i))s++;
        if(abs(a-i) == abs(b-i))d++;
    }
    cout << f << ' ' << d << ' '  << s << '\n';
    return 0;
}