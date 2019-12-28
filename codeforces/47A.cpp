#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 500; i++){
        if(i*(i+1)/2 == n){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}