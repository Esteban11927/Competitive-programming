#include<iostream>
#include<iomanip>
#include<vector>
#include<math.h>
using namespace std;
int main(){
    vector<int> vec[11];
    string s, t;
    int pos1 = 0, pos2 = 0, cont = 0, search = 0, ans = 0;
    
    cin >> s >> t;


    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+') pos1++;
        else pos1--;
    }
    for(int i = 0; i < t.size(); i++){
        if(t[i] == '+') pos2++;
        if(t[i] == '-') pos2--;
        if(t[i] == '?') cont++;
    }

    search = pos1 - pos2;

    
    vec[1].emplace_back(1);
    vec[1].emplace_back(-1);

    for(int i = 2; i <= 10; i++){
        for(int j = 0; j < pow(2, (i-1)); j++){
            vec[i].emplace_back(vec[i-1][j] + 1);
        }
        for(int j = 0; j < pow(2, (i-1)); j++){
            vec[i].emplace_back(vec[i-1][j] - 1);
        }
    }

    for(int j = 0; j < vec[cont].size(); j++){
        if(vec[cont][j] == search) ans++;
    }

    cout << fixed << setprecision(9);

    if(ans == 0){
        if(pos1 == pos2) cout << 1.0 << '\n';
        else cout << 0.0 << '\n';
        return 0;
    }

    cout << (double) (ans / pow(2,cont)*1.0) << '\n';
    return 0;
}