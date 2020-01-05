#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    if(a == 9 && b == 1) cout << "9 10\n";
    else if(abs(a-b) > 1 || a>b) cout << "-1\n";
    else cout << b*100 - abs(a-b) << ' ' << b*100+1-abs(a-b) << '\n';
    return 0;
}

//a+1=b