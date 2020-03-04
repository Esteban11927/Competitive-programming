#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n > 0){
        int i = 0;
        while(pow(2, i) <= n) i++;
        cout << i << ' ';
        n -= pow(2, i-1);
    }
    cout << '\n';
    return 0;
}