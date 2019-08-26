#include<iostream>
using namespace std;
 
const int tam = 1e5 + 10;
int sieve[tam];
 
void calsieve(){
    sieve[0] = 1;
    sieve[1] = 1;
    for(int i = 2; i < tam; i++){
        if(sieve[i] == false){
            sieve[i] = 1;
            for(int j = 2*i; j < tam; j += i){
                sieve[j] = 2;
            }
        }
    }
}
 
int main(){
    int n;
    calsieve();
    cin >> n;
    if(n > 2) cout << "2\n";
    else cout << "1\n";
    for(int i = 2; i <= n+1; i++){
        cout << sieve[i] << ' ';
    }
    cout << '\n';
}