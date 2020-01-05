#include<iostream>
using namespace std;
int main(){
    int n, in, sum = 0, odd = 0, even = 0;
    cin >> n;
    for(int i = 0; i <n; i++){
        cin >> in;
        sum += in;
        if(in%2) odd++;
        else even++;
    }
    if(sum%2) cout << odd << '\n';
    else cout << even << '\n';
    return 0;
}