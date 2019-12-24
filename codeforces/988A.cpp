#include<iostream>
#include<vector>
using namespace std;
bool arr[101];
int main(){
    int n, k, x;
    vector<int> vec;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(arr[x] == false){
            vec.emplace_back(i);
        }
        arr[x] = true;
    }
    if(vec.size() >= k){
        cout << "YES\n";
        for(int i = 0; i < k; i++) cout << vec[i]+1 << ' ';
    }
    else cout << "NO";
    cout << '\n';
    return 0;
}