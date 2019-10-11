#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n > 5) n = n/2 - 2;
    switch(n){
        case 1: cout << "Sheldon\n";
                break;
        case 2: cout << "Leonard\n";
                break;
        case 3: cout << "Penny\n";
                break;
        case 4: cout << "Rajesh\n";
                break;
        default: cout << "Howard\n";
                break;
    } 
    return 0;
}