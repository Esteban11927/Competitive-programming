#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int n, suma = 0, sumb = 0;
    cin >> n;
    int arr[n];
    for(int &c : arr) cin >> c;
    sort(arr, arr+n);
    for(int i = 0; i < n; i++){
        suma += (i < n/2 ? arr[i] : 0);
        sumb += (i >= n/2 ? arr[i] : 0);
    }
    cout << suma*suma + sumb*sumb << '\n';
    return 0;
}