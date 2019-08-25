#include<iostream>
using namespace std;
 
const int tam = 1e7+10;
bool sieve[tam];
int used[tam];
int primes[tam];
 
void calsieve(){
    for(int i = 2; i*i <= tam; i++){
        if(!sieve[i]){
            for(int j = i*i; j <= tam; j += i){
                sieve[j] = true;
            }
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T, n = 10000000;
    calsieve();
    cin >> T;
    
    int x = 1, y = 1;
    int cont = 0;    
    int i = 1;
 
    while(x*x + y*y*y*y <= n){
        for(y; y*y*y*y <= n - x*x; y++){
            if(!sieve[x*x + y*y*y*y] && used[x*x + y*y*y*y] != i){
                used[x*x + y*y*y*y] = i;
                cont++;
                if(cont < 1000)
                primes[x*x+y*y*y*y] = cont;
            }
        }
        x++;
        y = 1;
    }
    int aux = 0;
    for(int i = 0; i <= 10000000; i++){
        if(used[i]) aux++;
        primes[i] = aux;
    }
    for(int i = 0; i < T; i++){
        cin >> x;
        cout << primes[x] << '\n';
    }
    return 0;
}