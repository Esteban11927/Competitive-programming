#include<iostream>
using namespace std;
int i, q, n, k;

int cal(string s, string aux){
    int p = 0;
    for(i; i < n; i++){
        if(s[i] == aux[(p)%3]) p++;
        else break;
        cout << p << ' ' << i << '\n';
    }
    i--;
    return p;
}

int main(){
    string s;
    cin >> q;
    while(q--){
        int aux = 1;
        cin >> n >> k >> s;
        for(i = 0; i < n; i++){
            if(s[i] == 'R') aux = max(cal(s, "RGB"), aux);
            if(s[i] == 'G') aux = max(cal(s, "GBR"), aux);
            if(s[i] == 'B') aux = max(cal(s, "BRG"), aux);
        }
        cout << '\n' << aux << ' ';
        cout << max(0, k-aux) << '\n';
    }
    return 0;
}