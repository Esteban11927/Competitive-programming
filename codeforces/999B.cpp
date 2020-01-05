#include<iostream>
using namespace std;

string reverse(int l, int r, string s){
    string ss;
    for(int i = r; i >= l; i--) ss += s[i];
    for(int i = r+1; i < s.size(); i++) ss += s[i];
    return ss;
}

int main(){
    int n;
    string s;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            s = reverse(0, i-1, s);
        }
    }
    cout << s << '\n';
    return 0;
}