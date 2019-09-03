#include<iostream>
using namespace std;
 
int funcion(int n, int sum){
    int aux, sumaux = 0;
    if(n == 0){
        return sum;
    }
    else{
        for(int i = 0; i < 3; i++){
            cin >> aux;
            if(aux == 1){
                sumaux++;
            }
        }
        if(sumaux >= 2){
            sum++;
        }
        funcion(n - 1, sum);
    }
}
 
int main(){
    int n, sum = 0;
    cin >> n;
    cout << funcion(n, sum) << '\n';
}