#include<iostream>
#include<vector>
using namespace std;
bool aux[2000];
int main(){
    int n, x = 0, ans = 0;
    vector<int> vec;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        aux[a[i]] = true;
    }
    for(int i = 1000; i >= 0; i--){
        if(aux[i]){
            for(int j = 0; j < n; j++){
                if(a[j] == i){
                    vec.emplace_back(j+1);
                    ans += x*a[j]+1;
                    x++;
                }
            }
        }
    }
    cout << ans << '\n';
    for(int i = 0; i < n; i++) cout << vec[i] << ' ';
    cout << '\n';
    return 0;
}