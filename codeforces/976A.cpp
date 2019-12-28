#include<iostream>
using namespace std;
int main(){
    int n, z = 0, o = 0;
    string s;
    cin >> n >> s;
    for(char &c : s){
        if(c == '1') o++;
        else z++;
    }
    if(o){
        cout << '1';
        for(int i = 0; i < z; i++) cout << "0";
    }
    else cout << "0";
    cout << '\n';

    return 0;
}