#include<iostream>
using namespace std;
int main(){
    int n, x, one = 0, two = 0, aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 1) one++;
        else two++;
    }
    aux = min(one, two);
    one -= aux;
    two -= aux;
    cout << aux+one/3 << '\n';
    return 0;
}