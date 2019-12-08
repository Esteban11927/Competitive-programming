#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long int x = 1, a, b, ans = 0;
    cin >> a >> b;
    vector<long long int> allinones, justonezero;
    while(x <= 1e18){
        x = x*2 + 1;
        allinones.emplace_back(x);
    }
    for(int i = 0; i < allinones.size(); i++){
        for(int j = 0; j < 60; j++){
            long long int temp = allinones[i] - (((long long int)(1)) << j);
            if(temp > 0 && temp+1 != (((long long int)(1)) << j)) justonezero.emplace_back(temp);
        }
    }

    for(int i = 0; i < justonezero.size(); i++){
        if(a <= justonezero[i] && justonezero[i] <= b) ans++;
    }
    cout << ans << '\n';
    return 0;
}