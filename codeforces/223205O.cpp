#include<iostream>
using namespace std;
int main(){
    int ra, ca, rb, cb;
    cin >> ra >> ca;
    int mata[ra][ca];
    for(int i = 0; i < ra; i++){
        for(int j = 0; j < ca; j++){
            cin >> mata[i][j];
        }
    }
    cin >> rb >> cb;
    int matb[rb][cb];
    for(int i = 0; i < rb; i++){
        for(int j = 0; j < cb; j++){
            cin >> matb[i][j];
        }
    }
    
    int ans[ra][cb];
    
    for(int i = 0; i < ra; i++){
        for(int j = 0; j < cb; j++){
            ans[i][j] = 0;
        }
    }


    for(int i = 0; i < ra; i++){
        for(int j = 0; j < cb; j++){
            for(int k = 0; k < ca; k++){
                ans[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

    for(int i = 0; i < ra; i++){
        for(int j = 0; j < cb; j++){
            cout << ans[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}