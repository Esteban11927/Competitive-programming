#include<iostream>
using namespace std;

int n, x, y;
string s;

int to_num(int l, int r){
    int ans = 0;
    for(int i = l; i <= r; i++){
        ans = ans*10 + (s[i] - '0');
    }
    return ans;
}

void to_s(int b){
    if(b){
        to_s((b-1)/26);
        cout << (char)(65+((b-1)%26));
    }
}

void solve1(){
    int l = 1, r, a, b;
    for(r = 0; s[r+1] != 'C'; r++){}
    //cout << l << ' ' << r << '\n';
    a = to_num(l, r);
    b = to_num(r+2, s.size()-1);
    to_s(b);
    cout << a << '\n';
}

void s_to_num(int l, int r){
    int ans = 0;
    for(int i = l; i <= r; i++){
        ans = ans*26 + s[i]-('A'-1);
    }
    cout << 'C' << ans << '\n';
}

void solve2(){
    int l;
    for(l = 0; 'A' <= s[l] && s[l] <= 'Z'; l++);
    int a = to_num(l, s.size()-1);
    cout << "R" << a;
    s_to_num(0, l-1);
}

int main(){
    cin >> n;
    while(n--){
        bool aux = false;
        cin >> s;
        if(s[0] == 'R' && '0' <= s[1] && s[1] <= '9'){
            for(int i = 1; i < s.size(); i++){
                if(s[i] == 'C') aux = true;
            }
        }
        //if R#C# -> S#
        if(aux){
            solve1();
        }//if S# -> R#C#
        else{
            solve2();
        }
    }
    return 0;
}