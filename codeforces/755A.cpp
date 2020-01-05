#include<iostream>
using namespace std;

bool is_prime(int x){
    for(int i = 2; i*i <= x; i++) if(x%i == 0) return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    //cout<< is_prime(33) << '\n';
    for(int i = 1; i <= 1000; i++){
        if(is_prime(n*i+1) == false){
            cout << i << '\n';
            return 0;
        }
    }
    return 0;
}