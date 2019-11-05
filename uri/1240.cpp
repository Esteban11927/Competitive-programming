#include<iostream>
using namespace std;
int main(){
    int n, a, b;
    cin >> n;
    while(n--){
        cin >> a >> b;
        bool flag = true;
        while(a && b){
            if(a%10 != b%10) flag = false;
            a /= 10;
            b /= 10;
        }
        if(flag && !b) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
    return 0;
}