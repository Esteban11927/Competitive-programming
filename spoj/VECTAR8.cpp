#include<iostream>
using namespace std;
 
const int tam = 1e6+10;
bool sieve[tam];
int howmanyin[tam];
 
void calsieve(){
    sieve[0] = true;
    sieve[1] = true;
    for(int i = 2; i*i < tam; i++){
        if(sieve[i] == false){
            for(int j = i*i; j < tam; j += i){
                sieve[j] = true;
            }
        }
    }
}
 
bool zero(int n){
    while(n){
        if(n % 10 == 0) break;
        n = n/10;
    }
    if(n) return true;
    return false;
}
 
bool truncations(int n){
    int x = n, y, cont;
    while(x/10){
        cont = 0;
        y = x;
        while(y / 10){
            y /= 10;
            cont++;
        }
        int aux = 1;
        while(cont--){
            aux *= 10;
        }
        x -= y*aux;
        if(sieve[x]) return false;
    }
    if(sieve[x]) return false;
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n;
    calsieve();
    for(int i = 0; i < tam; i++){
        if(!sieve[i] && (zero(i) || !truncations(i))){
            sieve[i] = true;
        }
    }
 
    int aux = 0;
    for(int i = 2; i < tam; i++){
        if(!sieve[i]) aux++;
        howmanyin[i] = aux;
    }
 
    cin >> T;
    while(T--){
        cin >> n;
        cout << howmanyin[n] << '\n';
    }
 
    return 0;
}