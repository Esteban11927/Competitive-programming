#include<iostream>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;
    cout << (a+b) * (b-a+1) / 2 << '\n';
    return 0;
}