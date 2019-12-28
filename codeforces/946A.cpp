#include<iostream>
using namespace std;
int main(){
    int n, b = 0, c = 0, x;
    cin >> n;
    while(n--){
        cin >> x;
        if(x > 0) b += x;
        else c += x;
    }
    cout << b - c << '\n';
    return 0;
}