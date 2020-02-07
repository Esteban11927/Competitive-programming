#include<iostream>
using namespace std;
int aux[10000];
int main(){
    int n, p = 0;
    cin >> n;
    int arr[n*n];
    for(int i = 0; i < n*n; i++){
        cin >> arr[i];
        aux[arr[i]]++;
    }
    int mat[n][n];
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) mat[i][j] = 0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            while(aux[p] < 4){
                if(p > 1000) break;
                p++;
            }
            if(aux[p] >= 4){
                mat[i][j] = p;
                mat[n-i-1][j] = p;
                mat[i][n-j-1] = p;
                mat[n-i-1][n-j-1] = p;
                aux[p] -= 4;
            }
        }
    }
    p = 0;
    if(n%2 == 1){
        for(int i = 0; i < n/2; i++){
            while(aux[p] < 2){
                if(p > 1000) break;
                p++;
            }
            if(aux[p] >= 2){
                mat[n/2][i] = p;
                mat[n/2][n-i-1] = p;
                aux[p] -= 2;
            }
            if(aux[p] >= 2){
                mat[i][n/2] = p;
                mat[n-i-1][n/2] = p;
                aux[p] -= 2;
            }
        }
        p = 0;
        while(aux[p] == 0 && p <= 1000) p++;
        if(aux[p] == 1){
            mat[n/2][n/2] = p;
            aux[p]--;
        }
    }
    bool flag = true;
    for(int i = 0; i <= 1000; i++) if(aux[i] != 0) flag = false;
    if(flag){
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << mat[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    else cout << "NO\n";
    return 0;
}