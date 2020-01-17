#include<iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        if((a+b)%3 == 0 && abs(a-b) <= min(a, b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}