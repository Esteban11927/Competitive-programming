#include<iostream>
#include<set>
using namespace std;

int n, m = 1e9, l, r, pos;
set<int> s;

void evaluate(int *arr){
    for(int i = 0; i < n; i++){
        if(i == pos) continue;
        if(i < pos) l += arr[i];
        else r += arr[i];
    }
    return;
}

void change(int *arr){
    for(int i = 0; i < n; i++){
        if(i < s.upper_bound(l) && l <= r){
            cout << min(arr[i], arr[pos]) << ' ';
        }
        else if(i > pos && r < l){
            cout << min(arr[i], arr[pos]) << ' ';
        }
        else cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(m >= arr[i] && i >= 1 && i < n-1){
            m = arr[i];
            pos = i;
            s.insert(i);
        }
    }

    evaluate(arr);
    //cout << l << ' ' << r << ' ' << pos << ' ' << m << '\n';
    change(arr);

    return 0;
}