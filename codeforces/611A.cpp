#include<iostream>
using namespace std;
int main(){
    int x;
    string s;
    cin >> x >> s >> s;
    if(s == "month"){
        if(x == 30) cout << "11\n";
        else if(x == 31) cout << "7\n";
        else cout << "12\n";
    }
    else{
        if(x == 1 || x == 2 || x == 3 || x == 4 || x == 7) cout << "52\n";
        if(x == 5 || x == 6) cout << "53\n";
    }
    return 0;
}