#include<iostream>
using namespace std;
int main(){
    int n1, n2, x;
    cin >> n1 >> n2 >> x >> x;
    if(n1 == n2) cout << "Second\n";
    else if(n1 > n2) cout << "First\n";
    else cout << "Second\n";
    return 0;
}