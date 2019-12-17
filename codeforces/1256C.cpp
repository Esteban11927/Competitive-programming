#include<iostream>
using namespace std;
int river[20000];

int n, m, d;

bool valid(){
    int cont = 0;
    for(int i = 0; i < n; i++){
        if(river[i] != 0) cont = 0;
        else cont++;
        if(cont == d) return false;
    }
    return true;
}

int main(){
    cin >> n >> m >> d;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    int pos = -1;
    for(int j = 0; j < d; j++) pos++;
    for(int i = 0; i < m; i++){
        for(int j = pos; j < pos + arr[i]; j++) river[j] = i+1;
        while(river[pos+1] != 0) pos++;
        for(int j = 0; j < d; j++) pos++;
    }
    if(valid()){
        cout << "YES\n";
        for(int i = 0; i < n; i++) cout << river[i] << ' ';
    }
    else cout << "NO";
    cout << '\n';
    return 0;
}