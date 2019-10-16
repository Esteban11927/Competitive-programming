#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        getline(cin, s);
        for(int i = (s.size() / 2) - 1; i >= 0; i--){
            cout << s[i];
        }
        for(int i = s.size() - 1; i > (s.size() / 2) - 1; i--) cout << s[i];
        cout << '\n';
    }
    return 0;
}