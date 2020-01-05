#include<iostream>
using namespace std;
int main(){
    long long n, m, a, cont = 0, sum = 0;
    cin >> n >> m;
    for(int i = 0; i < n ; i++){
        cin >> a;
        sum += a;
        cout << sum/m << ' ';
        sum = sum%m;
    }
    cout << '\n';
    return 0;
}