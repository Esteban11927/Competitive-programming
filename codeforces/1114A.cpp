#include<iostream>
using namespace std;
int main(){
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    a -= x;
    if(a < 0){
        cout << "NO\n"; return 0;
    }
    int temp = min(y, a);
    y -= temp;
    a -= temp;
    b -= y;
    if(b < 0){
        cout << "NO\n"; return 0;
    }
    if(a+b+c >= z){
        cout << "YES\n"; return 0;
    }
    cout << "NO\n";
    return 0;
}