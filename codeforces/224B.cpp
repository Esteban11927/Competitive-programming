#include<iostream>
#include<map>
using namespace std;
const int tam = 1e5 + 10;
map<int, int> aux;
int ans[tam];
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n], cont = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(!aux[arr[i]]){
            cont++;
        }
        aux[arr[i]]++;
        ans[i] = cont;
    }
    int l = 0, r = 0, a = -2, b = -2;
    while(r < n){
        if(ans[r] - ans[l] == m - 1 && ((a == -2 && b == -2) || (r - l < b - a))){
            while(ans[l] == ans[l+1]) l++;
            a = l; b = r;
        }
        if(ans[r] - ans[l] < m-1) r++;
        else l++, r++;
    }
    aux.clear();
    for(int i = a; i <= b; i++){
        aux[arr[i]]++;
    }
    if(a != -2 && b != -1){
        for(int i = a; i <= b; i++){
            if(aux[arr[i]] == 1) break;
            aux[arr[i]]--;
            a++;
        }
    }
    cout << a + 1 << ' ' << b + 1 << '\n';
    return 0;
}