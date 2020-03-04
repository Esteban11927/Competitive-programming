#include<iostream>
using namespace std;
int main(){
    int z = 0, o = 0, n;
    char c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == '0') o++;
        else z++;
    }
    cout << n - min(z, o)*2 << '\n';
    return 0;
}