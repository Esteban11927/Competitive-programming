#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long int x, y;
    while(cin >> x >> y){
        cout << abs(x-y) << '\n';
    }
    return 0;
}