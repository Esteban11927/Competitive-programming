#include<iostream>
using namespace std;
const int tam = 1e6 + 100;
bool sieve[tam];
void calsieve(){
    for(int i = 2; i*i < tam; i++){
        if(sieve[i] == false){
            for(int j = i*i; j < tam; j += i){
                sieve[j] = true;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    calsieve();
    for(int i = 4; i < n; i++){
        if(sieve[i] == true && sieve[n-i] == true){
            cout << i << ' ' << n-i << '\n';
            break;
        }
    }
    return 0;
}