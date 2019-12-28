#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x, n;
    vector<int> vec;
    cin >> n;
    vec.emplace_back(1);
    for(int i = 0; i < n-1; i++){
        cin >> x;
        vec.emplace_back(x + vec[i]);
    }
    int minimum = 1e9;
    for(int i = 0; i < vec.size(); i++){
        minimum = min(minimum, vec[i]);
    }
    vector<int> aux;
    for(int i = 0; i < vec.size(); i++){
        vec[i] -= minimum - 1;
        aux.emplace_back(vec[i]);
    }
    bool ans = true;
    sort(aux.begin(), aux.end());
    for(int i = 1; i <= aux.size(); i++){
        if(aux[i-1] != i) ans = false;
    }
    if(ans){
        for(int i = 0; i < vec.size(); i++) cout << vec[i] << ' ';
        cout << '\n';
    }
    else cout << "-1\n";
    return 0;
}