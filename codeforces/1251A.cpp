#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, cont;
    char last, actual;
    string s;
    cin >> n;
    while(n--){
        bool flag = false;
        cont = 1;
        cin >> s;
        vector<char> vec;
        actual = s[0];
        if(s.size() >= 2){
            for(int i = 1; i < s.size(); i++){
                last = actual;
                actual = s[i];
                if(actual == last) cont++;
                else{
                    flag = true;
                    if(cont%2){
                        vec.emplace_back(last);
                    }
                    cont = 1;
                }
            }
            if(s[s.size()-1] != s[s.size() - 2] || cont%2) vec.emplace_back(s[s.size()-1]);
            sort(vec.begin(), vec.end());
        }
        else vec.emplace_back(s[0]);
        if(vec.size() == 0 && s.size()%2 == 1 && flag == false) vec.emplace_back(s[0]);
        if(vec.size()) cout << vec[0];
        for(int i = 1; i < vec.size(); i++){
            if(vec[i] != vec[i-1]) cout << vec[i];
        }
        cout << '\n';
    }
    return 0;
}