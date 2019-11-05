#include<iostream>
using namespace std;
long long factorial[21];
void cal(){
    factorial[0] = 1;
    factorial[1] = 1;
    for(int i = 2; i <= 20; i++){
        factorial[i] = i * factorial[i-1];
    }
}
int main(){
    int n, m;
    cal();
    while(cin >> n >> m){
        cout << factorial[n] + factorial[m] << '\n';
    }
    return 0;
}