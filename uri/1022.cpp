#include<iostream>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
}

int main(){
    int n, a, b, c, d, e, f;
    char ch, op;
    cin >> n;
    while(n--){
        cin >> a >> ch >> b >> op >> c >> ch >> d;
        if(op == '+'){
            e = a*d + b*c;
            f = b*d;
        }
        if(op == '-'){
            e = a*d - b*c;
            f = b*d;
        }
        if(op == '*'){
            e = a*c;
            f = b*d;
        }
        if(op == '/'){
            e = a*d;
            f = b*c;
        }
        int g = abs(gcd(max(e, f), min(e, f)));
        if(f < 0){
            f *= -1;
            e *= -1;
        }
        cout << e << "/" << f << " = " << e/g << "/" << f/g << '\n';
    }
    return 0;
}