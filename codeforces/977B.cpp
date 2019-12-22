#include<iostream>
#include<map>
using namespace std;
string s, a, b;
int n, maximum;

int cont(char t, char g){
    int aux = 0;
    for(int i = 0; i < n-1; i++){
        if(t == s[i] && g == s[i+1]) aux++;
    }
    return aux;
}

int main(){
    cin >> n;
    cin >> s;
    for(int i = 0; i < n-1; i++){
        char t = s[i];
        char g = s[i+1];
        int temp = cont(t, g);
        if(temp > maximum){
            maximum = temp;
            a = s[i];
            b = s[i+1];
        }
    }
    cout << a << b << '\n';
    return 0;
}