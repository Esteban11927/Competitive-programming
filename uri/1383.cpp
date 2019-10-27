#include<iostream>
#include<string.h>
using namespace std;

int mat[9][9];
bool conf[9];

bool evaluate2(){
    for(int i = 0; i < 9; i++){
        memset(conf, 0, sizeof conf);
        for(int j = 0; j < 9; j++){
            if(conf[mat[i][j] - 1] == true){
                return false;
            }
            conf[mat[i][j] - 1] = true;
        }
    }

    for(int i = 0; i < 9; i++){
        memset(conf, 0, sizeof conf);
        for(int j = 0; j < 9; j++){
            if(conf[mat[j][i] - 1] == true){
                return false;
            }
            conf[mat[j][i] - 1] = true;
        }
    }

    return true;
}


bool evaluate(int row, int column){
    memset(conf, 0, sizeof conf);
    for(int i = row; i < row+3; i++){
        for(int j = column; j < column+3; j++){
            conf[mat[i][j] - 1] = true;
        }
    }

    for(int i = 0; i < 9; i++){
        if(conf[i] == false) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    for(int k = 1; k <= n; k++){
        bool ans = false;
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cin >> mat[i][j];
            }
        }
        cout << "Instancia " << k << '\n';
        
        if(evaluate(0, 0) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(0, 3) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(0, 6) == false){
            cout << "NAO\n\n";
            continue;
        }

        if(evaluate(3, 0) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(3, 3) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(3, 6) == false){
            cout << "NAO\n\n";
            continue;
        }

        if(evaluate(6, 0) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(6, 3) == false){
            cout << "NAO\n\n";
            continue;
        }
        if(evaluate(6, 6) == false){
            cout << "NAO\n\n";
            continue;
        }

        if(evaluate2() == false){
            cout << "NAO\n\n";
            continue;
        }

        cout << "SIM\n\n";

    }
    return 0;
}