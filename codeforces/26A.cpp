#include<iostream>
using namespace std;
 
const int tam = 5000;
int sieve[tam];
 
void calsieve(){
    sieve[0] = true;
    sieve[1] = true;
    for(int i = 2; i < tam; i++){
        if(!sieve[i]){
            for(int j = 2*i; j < tam; j += i){
                sieve[j]++;
            }
        }
    }
}
 
int main(){
    int n, cont = 0;
    calsieve();
    cin >> n;
    for(int i = 0; i <= n; i++){
        if(sieve[i] == 2) cont++;
    }
    cout << cont << '\n';
    return 0;
}