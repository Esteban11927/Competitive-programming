#include<iostream>
using namespace std;
int main(){
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    for(int i = a; i <= c; i+=a){
        if(i%b == 0) ans++;
    }
    cout << ans << '\n';
    return 0;
}