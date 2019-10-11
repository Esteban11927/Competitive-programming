#include<iostream>
#include<algorithm>
using namespace std;
bool compare(const int a, const int b){
    return a > b;
}
int main(){
    int q, n, x, a, y, b;
    long long k;
    cin >> q;
    while(q--){
        long long ans = 0, definitiveAns = 0, senalador = 0;
        cin >> n;
        int arr[n];
        bool aux[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n, compare);
        cin >> x >> a;
        cin >> y >> b;
        cin >> k;
        if(x >= y){
            for(int i = 0; i < n; i++){
                if((i+1)%a == 0 && senalador < n){
                    if(ans < k) definitiveAns++;
                    ans += (int)(arr[senalador++] / 100 * x);
                }
            }
            for(int i = 0; i < n; i++){
                if((i+1)%b == 0 && senalador < n){
                    if(ans < k) definitiveAns++;
                    ans += (int)(arr[senalador++] / 100 * y);
                }
            }
            senalador = 0;
            for(int i = 0;  i < n; i++){
                if((i+1)%a == 0 && (i+1)%b == 0){
                    ans += (int)(arr[senalador++] / 100 * y);
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
                if((i+1)%b == 0 && senalador < n && aux[senalador] == false){
                    if(ans < k) definitiveAns++;
                    ans += (int)(arr[senalador++] / 100 * y);
                }
            }
            for(int i = 0; i < n; i++){
                if((i+1)%a == 0 && senalador < n && aux[senalador] == false){
                    if(ans < k) definitiveAns++;
                    ans += (int)(arr[senalador++] / 100 * x);
                }
            }
            senalador = 0;
            for(int i = 0;  i < n; i++){
                if((i+1)%a == 0 && (i+1)%b == 0){
                    ans += (int)(arr[senalador++] / 100 * x);
                }
            }
        }
        if(ans < k) cout << "-1" << '\n';
        else cout << definitiveAns << '\n';
    }    
    return 0;
}

