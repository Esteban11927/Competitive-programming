#include<iostream>
using namespace std;

long long int ans = 1e15, n;

void dfs(long long int lucky, long long int dif){
    if(lucky < ans){
        if(dif == 0 && lucky >= n){
            ans = lucky;
        }
        else{
            dfs(lucky*10 + 4, dif+1);
            dfs(lucky*10 + 7, dif-1);
        }
    }
    return;
}

int main(){
    cin >> n;
    dfs(0, 0);
    cout << ans << '\n';
    return 0;
}