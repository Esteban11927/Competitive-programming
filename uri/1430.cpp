#include<iostream>
using namespace std;
int main(){
    string s;
    double W = 1.0, H = 1.0/2, Q = 1.0/4, E = 1.0/8, S = 1.0/16, T = 1.0/32, X = 1.0/64;
    while(getline(cin, s)){
        cout << s << '\n';
        if(s == "*") break;
        double ans = 0, sum = 0.0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'W') sum += W;
            if(s[i] == 'H') sum += H;
            if(s[i] == 'Q') sum += Q;
            if(s[i] == 'E') sum += E;
            if(s[i] == 'S') sum += S;
            if(s[i] == 'T') sum += T;
            if(s[i] == 'X') sum += X;
            if(s[i] == '/'){
                if(sum == 1.0)  ans++;
                sum = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}