#include<iostream>
using namespace std;
int river[20000];
int n, m, d, p, sum, arr[2000];
int main(){
    cin >> n >> m >> d;
    for(int i = 0; i < m; i++) cin >> arr[i], sum += arr[i];
    if(sum+(m+1)*(d-1) < n){
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    int cont = 0, p = 0;
    while(sum+cont < n || p < m){
        int aux = min(n-sum-cont,d-1);
        cont += aux;
        for(int i = 0; i < aux; i++) cout << "0 ";
        for(int i = 0; i < arr[p]; i++) cout << p+1 << ' ';
        p++;
    }
    cout << '\n';
    return 0;
}