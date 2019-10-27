#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, q, x, cas = 0;
    while(cin >> n >> q){
        if(n == 0 && q == 0) break;
        cas++;
        cout << "CASE# " << cas << ":\n";
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < q; i++){
            int r = n-1, l = 0;
            cin >> x;
            while(r - l > 1){
                int mid = (r + l) / 2;
                if(arr[mid] < x) l = mid;
                else r = mid;
            }
            if(arr[r] == x) cout << x << " found at " << r+1 << '\n';
            else if(arr[l] == x) cout << x << " found at " << l+1 << '\n';
            else cout << x << " not found\n";
        }
    }
    return 0;
}