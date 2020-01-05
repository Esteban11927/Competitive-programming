#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    cout << 26*(s.size()+1)-s.size() << '\n';
    return 0;
}