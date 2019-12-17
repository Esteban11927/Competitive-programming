#include<iostream>
using namespace std;
int main(){
    int n, x, y, neg = 0, pos = 0;
    cin >> n;
    while(n--){
        cin >> x >> y;
        if(x < 0) neg++;
        else pos++;
    }
    if(neg <= 1 || pos <= 1)    cout << "YES\n";
    else cout << "NO\n";
    return 0;
}