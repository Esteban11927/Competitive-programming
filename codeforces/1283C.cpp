#include<iostream>
#include<vector>
using namespace std;
bool aux[1000000];
int main(){
    int n;
    vector<int> doesntKnow, withoutGift;
    cin >> n;
    int f[n];
    for(int i = 0; i < n; i++){
        cin >> f[i];
        if(!f[i]) doesntKnow.emplace_back(i);
        aux[f[i]] = true;
    }
    for(int i = 1; i <= n; i++){
        if(!aux[i]) withoutGift.emplace_back(i);
    }
    for(int i = 0; i < doesntKnow.size()-1; i++){
        if(doesntKnow[i]+1 == withoutGift[i] || doesntKnow[i+1]+1 == withoutGift[i+1]){
            swap(doesntKnow[i], doesntKnow[i+1]);
        }
        f[doesntKnow[i]] = withoutGift[i];
    }
    f[doesntKnow[doesntKnow.size()-1]] = withoutGift[withoutGift.size()-1];
    for(int i = 0; i < n; i++) cout << f[i] << ' ';
    cout << '\n';
    return 0;
}