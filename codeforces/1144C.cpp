#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int aux[300000];
int main(){
    int n;
    vector<int> a, b;
    bool flag = true;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        aux[arr[i]]++;
        if(aux[arr[i]] >= 3) flag = false;
        if(aux[arr[i]] == 1) a.emplace_back(arr[i]);
        else b.emplace_back(arr[i]);
    }
    if(flag){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        cout << "YES\n" << a.size() << '\n';
        for(int i = 0; i < a.size(); i++) cout << a[i] << ' ';
        cout << '\n' << b.size() << '\n';
        for(int i = 0; i < b.size(); i++) cout << b[b.size()-i-1] << ' ';
        cout << '\n';
    }
    else cout << "NO\n";
    return 0;
}