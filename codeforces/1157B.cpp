#include<iostream>
using namespace std;
int main(){
    int n, flag = 0;
    string s;
    char a = '0', b = '0', arr[10];
    cin >> n >> s;
    for(int i = 1; i <= 9; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        if(s[i] < arr[s[i]-'0'] && flag == 0) flag++;
        if(s[i] > arr[s[i]-'0'] && flag == 1) flag++;
        if(flag == 1) cout << arr[s[i]-'0'];
        if(flag != 1) cout << s[i];
    }
    cout << '\n';
    return 0;
}