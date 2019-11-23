#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<int> bin, vec;
const int tam = 1e6+100;

int arr[tam][2], num[tam];

bool quasibinary(int n){
    while(n){
        if(n%10 == 0 || n%10 == 1){
            n /= 10;
            continue;
        }
        return false;
    }
    return true;
}

int main(){
    for(int i = 0; i < tam; i++){
        arr[i] = tam;
    }
    for(int i = 10; i <= 1e6; i++){
        if(quasibinary(i)) bin.emplace_back(i);
    }
    cal(n, 0); 
    for(int i = 0; i < 30; i++) cout << arr[i] << ' ';
    cout << '\n';
    return 0;
}