#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int c, n, sum, ans;
    double prom;
    cin >> c;
    while(c--){
        sum = 0;
        ans = 0;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        prom = (1.0*sum)/n;
        for(int i = 0; i < n; i++){
            if(arr[i] > prom) ans++;
        }
        cout << fixed << setprecision(3);
        cout << (100.0/n)*ans*1.0 << "%\n";
    }
    return 0;
}