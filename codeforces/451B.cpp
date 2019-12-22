#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, l = 0, r = 0, i;
    cin >> n;
    int a[n], b[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b+n);
    for(i = 0; i < n; i++){
        if(a[i] != b[i]){
            l = i;
            break;
        }
    }
    for(i = n-1; i > l; i--){
        if(a[i] != b[i]){
            r = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(l <= i && i <= r){
            if(a[r-i+l] != b[i]){
                cout << "no\n";
                return 0;
            }
        }
        else{
            if(a[i] != b[i]){
                cout << "no\n";
                return 0;
            }
        }
    }
    cout << "yes\n" << l+1 << ' ' << r+1 << '\n';
    return 0;
}