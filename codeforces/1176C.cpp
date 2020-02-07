#include<iostream>
using namespace std;
int aux[50];
int main(){
    int n, a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a == 4) aux[4]++;
        if(a == 8 && aux[4] > aux[8]) aux[8]++;
        if(a == 15 && aux[8] > aux[15]) aux[15]++;
        if(a == 16 && aux[15] > aux[16]) aux[16]++;
        if(a == 23 && aux[16] > aux[23]) aux[23]++;
        if(a == 42 && aux[23] > aux[42]) aux[42]++;
    }
    cout << n-6*aux[42] << '\n';
    return 0;
}