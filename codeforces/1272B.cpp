#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n;
    while(n--){
        int d = 0, u = 0, l = 0, r = 0;
        cin >> s;
        for(char &c : s){
            if(c == 'R') r++;
            if(c == 'U') u++;
            if(c == 'D') d++;
            if(c == 'L') l++;
        }
        r = min(r, l);
        l = r;
        u = min(u, d);
        d = u;
        if((l > 0) + (r > 0) + (u > 0) + (d > 0) == 3 || (l > 0) + (r > 0) + (u > 0) + (d > 0) == 1) cout << "0\n";
        else if((l > 0) + (r > 0) + (u > 0) + (d > 0) == 2){
            cout << "2\n";
            if((l > 0) && (r > 0)) cout << "LR\n";
            else if((u > 0) && (d > 0)) cout << "UD\n";
            else cout << "0\n";
        }
        else{
            cout << l+r+u+d << '\n';
            while(r--) cout << 'R';
            while(u--) cout << 'U';
            while(l--) cout << 'L';
            while(d--) cout << 'D';
            cout << '\n';
        }
    }
    return 0;
}