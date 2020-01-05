#include<iostream>
using namespace std;
int main(){
    string s;
    int link = 0, pearl = 0;
    cin >> s;
    for(char &c : s){
        if(c == '-')link++;
        else pearl++;
    }
    if(link == 0 || pearl == 0 || (link >= pearl && link%pearl == 0)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}