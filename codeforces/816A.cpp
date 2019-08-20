#include<iostream>
using namespace std;
string s;
void plusmin(){
    //Si pasa de hora
    if(s[3] == '5' && s[4] == '9'){
        if(s[0] == '2' && s[1] == '3'){
            s = "00:00";
        }
        else if(s[1] == '9'){
            if(s[0] == '0') s[0] = '1';
            else s[0] = '2';
            s[1] = '0';
        }
        else s[1]++;
        s[3] = '0';
        s[4] = '0';
    }
    else{
        if(s[4] == '9'){
            s[4] = '0';
            s[3]++;
        }
        else{
            s[4]++;
        }
    }
}
int main(){
    int n;
    cin >> s;
    int cont = 0;
    while(s[0] != s[4] || s[1] != s[3]){
        plusmin();
        cont++;
    }
    cout << cont << '\n';
    return 0;
}
