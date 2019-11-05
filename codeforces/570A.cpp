#include<iostream>
#include<map>
using namespace std;
int main(){
    int n, m, qc = 0, v = 0;
    cin >> n >> m;
    int arr[n+1] = {0};
    map<int, int> mapa;

    for(int i = 0; i < m; i++){
       
        v = 0;

        for(int j = 1; j <= n; j++){
            cin >> arr[j];
            v = max(v, arr[j]);
        }

        for(int j = 1; j <= n; j++){
            if(arr[j] == v){
                mapa[j]++;
                qc = max(mapa[j], qc);
                break;
            }
        }

    }

    for(int j = 1; j <= n; j++){
        if(mapa[j] == qc){
            cout << j << '\n';
            break;
        }
    }
    return 0;
}