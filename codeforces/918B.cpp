#include<iostream>
using namespace std;

bool equal(string a, string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    int n, m;
    cin >> n >> m;
    string ni[n][2], ci[m][2];
    for(int i = 0; i < n; i++) cin >> ni[i][0] >> ni[i][1];
    for(int i = 0; i < m; i++) cin >> ci[i][0] >> ci[i][1];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(equal(ni[j][1], ci[i][1])){
                cout << ci[i][0] << ' ' << ci[i][1] << " #" << ni[j][0] << '\n';
                break;
            }
        }
    }
    return 0;
}