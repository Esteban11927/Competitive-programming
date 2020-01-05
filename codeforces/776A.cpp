#include<iostream>
using namespace std;
int main(){
    string a, b, s, t;
    int n;
    cin >> a >> b >> n;
    cout << a << ' ' << b << '\n';
    for(int i =0 ; i < n; i++){
        cin >> s >> t;
        if(s == a) a = t;
        else if(s == b) b = t;
        cout << a << ' ' << b << '\n';
    }
    return 0;
}