#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(const string s, const string ss){
    return s.size() > ss.size();
}

int main(){
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while(n--){
        string ss;
        vector<string> vec;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') ss += (s[i]);
            else{
                vec.emplace_back(ss);
                ss.clear();
            }
            if(i == s.size() - 1){
                vec.emplace_back(ss);
                ss.clear();
            }
        }
        stable_sort(vec.begin(), vec.end(), compare);
        for(int i = 0; i < vec.size(); i++){
            cout << vec[i];
            if(i < vec.size() - 1) cout <<  ' ';
        }
        cout << '\n';
    }
}