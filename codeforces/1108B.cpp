#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int cont[20000];
bool aux[20000];
int main(){
    int n, in, x = 0, y = 0;
    vector<int> vec;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> in;
        cont[in]++;
        x = max(x, in);
    }
    for(int i = 1; i <= x; i++){
        if(x%i == 0 && cont[i] == 1) aux[i] = true;
    }
    for(int i = 1; i <= x; i++) if(cont[i] > 0 && aux[i] == false) vec.emplace_back(i);
    sort(vec.begin(), vec.end());
    cout << x << ' ' << vec[vec.size()-1] << '\n';
    return 0;
}