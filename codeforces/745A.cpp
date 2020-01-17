#include<iostream>
#include<set>
using namespace std;
int main(){
    string s, aux;
    cin >> s;
    set<string> se;
    for(int i = 0; i < s.size(); i++){
        aux.clear();
        for(int j = i; j < s.size(); j++) aux += s[j];
        for(int j = 0; j < i; j++) aux += s[j];
        se.insert(aux);
    }
    cout << se.size() << '\n';
    return 0;
}