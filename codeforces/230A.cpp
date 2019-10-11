#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main(){
    int s, n;
    cin >> s >> n;
    pair<int, int> dragon[n];
    for(int i = 0; i < n; i++){
        cin >> dragon[i].first >> dragon[i].second;
    }
    sort(dragon, dragon + n);
    for(int i = 0; i < n ; i++){
        if(s <= dragon[i].first){
            cout << "NO\n";
            return 0;
        }
        s += dragon[i].second;
    }
    cout << "YES\n";
}