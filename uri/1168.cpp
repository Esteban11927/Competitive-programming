#include<iostream>
using namespace std;
int main(){
    int n, x, ans;
    string s;
    cin >> n;
    while(n--){
        ans = 0;
        cin >> s;
        x = s.size();
        for(int i = 0; i < x; i++){
            if(s[i] == '0') ans += 6;
            if(s[i] == '1') ans += 2;
            if(s[i] == '2') ans += 5;
            if(s[i] == '3') ans += 5;
            if(s[i] == '4') ans += 4;
            if(s[i] == '5') ans += 5;
            if(s[i] == '6') ans += 6;
            if(s[i] == '7') ans += 3;
            if(s[i] == '8') ans += 7;
            if(s[i] == '9') ans += 6;
        }
        cout << ans  << " leds\n";
    }
    return 0;
}