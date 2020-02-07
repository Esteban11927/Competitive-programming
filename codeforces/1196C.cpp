#include<iostream>
using namespace std;
int main(){
    int q, n, x, y, f1, f2, f3, f4, a = -1e9, b = 1e9, c = 1e9, d = -1e9;
    cin >> q;
    while(q--){
        cin >> n;
        a = -1e5, b = 1e5, c = 1e5, d = -1e5;
        for(int i = 0; i < n; i++){
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;
            if(f1 == 0) a = max(x, a);
            if(f2 == 0) b = min(y, b);
            if(f3 == 0) c = min(x, c);
            if(f4 == 0) d = max(y, d);
        }
        if(a <= c && d <= b){
            cout << "1 " << a << ' ' << d << '\n';
        }
        else cout << "0\n";
    }
    return 0;
}