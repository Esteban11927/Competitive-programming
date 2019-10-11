#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if(n > 1){
        for(int i = 0; i < n; i++){
            if(i == 0){
                if(s[0] != '1' && k > 0){
                    k--;
                    s[i] = '1';
                }
                continue;
            }
            if(s[i] != '0' && k > 0){
                s[i] = '0';
                k--;
            }
        }
    }
    else if(k > 0) s[0] = '0';
    cout << s << '\n';
    return 0;
}