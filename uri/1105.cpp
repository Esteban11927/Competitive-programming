#include<iostream>
using namespace std;
int main(){
    int banks, debentures, debtor, creditor, value;
    while(cin >> banks >> debentures){
        if(banks == 0 && debentures == 0) break;
        int bankreserve[banks];
        for(int i = 0; i < banks; i++){
            cin >> bankreserve[i];
        }
        for(int i = 0; i < debentures; i++){
            cin >> debtor >> creditor >> value;
            bankreserve[debtor - 1] -= value;
            bankreserve[creditor - 1] += value;
        }
        bool flag = true;
        for(int i = 0; i < banks; i++){
            if(bankreserve[i] < 0) flag = false;
        }
        if(flag) cout << "S\n";
        else cout << "N\n";
    }
    return 0;
}