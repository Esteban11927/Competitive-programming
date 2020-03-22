#include<iostream>
#include<math.h>
using namespace std;
string s, ans;

string tostring(int x){
    string r;
    for(int i = 0; i < 10; i++){
        if(x%2) r += s[i];
        x /= 2;
    }
    for(int i = 0; i < r.size(); i++){
        if(r[i] != r[r.size()-i-1]){
            return r = "";
        }
    }
    return r;
}

int main(){
    cin >> s;
    for(int i = 1; i < pow(2, s.size()+1); i++){
        if(tostring(i) > ans) ans = tostring(i);
    }
    cout << ans << '\n';
    return 0;
}