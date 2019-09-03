#include<iostream>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[n - 1 - i]){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}