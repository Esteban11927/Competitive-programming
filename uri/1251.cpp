#include<iostream>
#include<string.h>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return (a.second > b.second);
}
bool compare2(pair<int, int> a, pair<int, int> b){
    return (a.first < b.first);
}

int main(){
    string s;
    int arr[1000];
    bool sal = false;
    while(getline(cin, s)){
        if(sal) cout << '\n';
        vector<pair<int, int>> vec;
        memset(arr, 0, sizeof arr);
        for(int i = 0; i < s.size(); i++){
            arr[s[i]]++;
        }
        for(int i = 0; i < 1000; i++){
            if(arr[i]){
                vec.push_back({arr[i], i});
            }
        }
        sort(vec.begin(), vec.end(), compare);
        stable_sort(vec.begin(), vec.end(), compare2);
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i].second << ' ' << vec[i].first << '\n';
        }
        sal = true;
    }
    return 0;
}