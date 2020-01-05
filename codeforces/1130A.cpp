#include<iostream>
using namespace std;
int main(){
    int n, neg = 0, pos = 0, in;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        if(in > 0) pos++;
        if(in < 0) neg++;
    }
    if(pos >= (n+1)/2) cout << "1\n";
    else if(neg >= (n+1)/2) cout << "-1\n";
    else cout << "0\n";
    return 0;
}