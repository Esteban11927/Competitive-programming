#include<iostream>
using namespace std;
 
const int tam = 1e8;
bool sieve[tam];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 2; i <= 1e4; i++){
        if(!sieve[i]){
            for(int j = i*i; j <= 1e8; j += i){
                sieve[j] = true;
            }
        }
    }
    
    cout << "2\n";
    int cont = 2;
    for(int i = 3; i <= 1e8; i++){
        if(!sieve[i]){
            if(cont%100 == 1){
                cout << i << '\n';
            }
            cont++;
        }
    }
    return 0;
}