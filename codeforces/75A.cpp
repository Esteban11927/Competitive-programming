#include<iostream>
using namespace std;
int main(){
    long long int a, b, c = 0, cc = 0, d = 0, dd = 0, e, ee = 0, eee = 0, f;
    cin >> a >> b;
    e = a + b;

    while(e){
        if(e%10!=0){
            ee *= 10;
            ee += e%10;
        }
        e /= 10;
    }
    while(ee){
        eee *= 10;
        eee += ee%10;
        ee /= 10;
    }

    while(a){
        if(a%10 != 0){
            c *= 10;
            c += a%10;
        }
        a /= 10;
    }
    while(c){
        cc *= 10;
        cc += c%10;
        c /= 10;
    }

    while(b){
        if(b%10 != 0){
            d *= 10;
            d += b%10;
        }
        b /= 10;
    }
    while(d){
        dd *= 10;
        dd += d%10;
        d /= 10;
    }

    if(cc + dd == eee) cout << "YES\n";
    else cout << "NO\n";
    //cout << cc << ' ' << dd << ' ' << eee << '\n';

    return 0;
}