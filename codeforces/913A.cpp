#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int x = pow(2, n);
    cout << m%x << '\n';
    return 0;
}