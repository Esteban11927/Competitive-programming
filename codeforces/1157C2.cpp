#include<iostream>
using namespace std;
int rrr = 0;
string evaluate(int arr[], int l, int r, int m){
    int cont = 0, a = m, b = m, ll = l, rr = r;
    while(a < arr[ll] && ll <= r){
        a = arr[ll++];
        cont++;
    }
    a = 0;
    while(b < arr[rr] && rr >= l){
        b = arr[rr--];
        a++;
    }
    rrr = max(a, cont);
    return (max(a, cont) == a ? "R" : "L");
}
int main(){
    int n, m = 0;
    string ans;
    cin >> n;
    int arr[n], l = 0, r = n-1, maxi = 0;
    for(int i = 0; i < n; i++) cin >> arr[i];
    while(l <= r){
        if(arr[l] == arr[r]){
            string rr = evaluate(arr, l, r, m);
            for(int i = 0; i < rrr; i++) ans += rr;
            break;
        }
        if(arr[l] > maxi && arr[r] > maxi) maxi = min(arr[l], arr[r]);
        else if(arr[l] > maxi || arr[r] > maxi) maxi = max(arr[l], arr[r]);
        if(arr[l] == maxi && m != maxi){
            ans += 'L';
            l++;
        }
        else if(arr[r] == maxi && m != maxi){
            ans += 'R';
            r--;
        }
        else break;
        m = maxi;
    }
    cout << ans.size() << '\n' << ans << '\n';
    return 0;
}