#include<iostream>
#include<math.h>
 
using namespace std;
 
const long long tam = 1e5+100;
bool sieve[tam];
int num[tam];
 
void calsieve(){
    sieve[0] = true;
    sieve[1] = true;
    for(int i = 2; i*i < tam; i++){
        if(!sieve[i]){
            for(int j = i*i; j < tam; j += i){
                sieve[j] = true;
            }
        }
    }
}
 
void calnum(){
    int aux = 1;
    for(int i = 2; i < tam; i++){
        if(!sieve[i]){
            num[i] = aux;
            aux++;
        }
    }
    aux = 0;
    for(int i = 0; i < tam; i++){
        if(aux != num[i] && num[i]) aux = num[i];
        num[i] = aux;
    }
}
 
int main(){
    long long T, n, k;
    calsieve();
    calnum();
    cin >> T;

    while(T--){
        cin >> n >> k;
        cout << num[(int)sqrt(n)] << ' ' << max(num[(int)sqrt(n)] - num[(int)sqrt(k)], 0) << '\n';
    }
    return 0;
}