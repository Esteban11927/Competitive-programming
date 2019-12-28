#include<iostream>
using namespace std;
int main(){
    int n, o = 0, z = 0;
    string s;
    cin >> n >> s;
    for(char &c : s){
        if(c == '1')o++;
        else z++;
    }
    if(o != z) cout << 1 << '\n' << s << '\n';
    else{
        cout << "2\n";
        cout << s[0] << ' ';
        for(int i = 1; i < s.size(); i++){
            cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}