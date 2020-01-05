#include<iostream>
using namespace std;

int solve(int x){
    for(int i = x; i < 100; i++){
        bool aux = false;
        for(int j = 2; j*j <= i; j++){
            if(i%j == 0) aux = true;
        }
        if(aux == false) return i;
    }
    return 0;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << (solve(x+1) == y ? "YES\n" : "NO\n");
    return 0;
}