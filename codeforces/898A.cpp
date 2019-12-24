#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%10 <= 5){
        while(n%10) n--;
    }
    else while(n%10) n++;
    cout << n << '\n';
    return 0;
}