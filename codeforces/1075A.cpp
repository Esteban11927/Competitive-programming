#include<iostream>
using namespace std;
int main(){
    long long int n, x, y, w, b;
    cin >> n >> x >> y;
    w = x+y-min(x,y)-1;
    b = n-x+n-y-min(n-x,n-y);
    cout << (min(b,w) == w ? "White\n" : "Black\n");
    return 0;
}