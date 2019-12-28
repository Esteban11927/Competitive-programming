#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, x, maximum = 0, minimum = 1e9, sum = 0;
    cin >> n >> m;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> x;
        arr[i] = x;
        sum += x;
        minimum = min(x, minimum);
        maximum = max(x, maximum);
    }
    int cont = 0;
    for(int i = 0; i < n; i++){
        while(arr[i] != maximum && cont != m){
            arr[i]++;
            cont++;
        }
    }
    int mm = m;
    m -= cont;
    while(m != 0){
        for(int i = 0; i < n && m > 0; i++){
            arr[i]++;
            m--;
        }
    }
    m = mm;
    minimum = 0;
    for(int i = 0; i <n ; i++) minimum = max(minimum, arr[i]);
    
    cout << minimum << ' ' << m + maximum << '\n';
    return 0;
}