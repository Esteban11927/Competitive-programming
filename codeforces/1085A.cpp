#include<iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int l = (s.size()-1)/2, r = (s.size()+1)/2;
    while((0 <= l && l < s.size()) || (0 <= r && r < s.size())){
        if((0 <= l && l < s.size())) cout << s[l--];
        if((0 <= r && r < s.size())) cout << s[r++];
    }
    cout << "\n";
    return 0;
}