#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    if(s.size() == 1){
        cout << "YES\n";
        return 0;
    }
    sort(s.begin(), s.end());
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}