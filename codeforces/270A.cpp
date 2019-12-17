#include<iostream>
#include<map>
using namespace std;
int main(){
    double i = 3, n, x;
    map<double, bool> angle;
    double temp = 0;
    while(i <= 360){
        temp = ((i-2) * 180) / i;
        angle[temp] = true;
        i++;
    }
    cin >> n;
    while(n--){
        cin >> x;
        if(angle[x]) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}