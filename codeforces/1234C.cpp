#include<iostream>
using namespace std;

int arr[2][200010], n, q;

bool evaluate(int i, int j){
    //cout << i << ' ' << j << '\n';
    if(j == n) return (i == 1);
    if(arr[i][j] <= 2) return evaluate(i, j+1);
    else if(i == 0 && arr[i+1][j] > 2) return evaluate(i+1, j+1);
    else if(i == 1 && arr[i-1][j] > 2) return evaluate(i-1, j+1);
    return false;
}

int main(){
    char c;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                cin >> c;
                arr[i][j] = c-'0';
            }
        }
        if(evaluate(0, 0)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}