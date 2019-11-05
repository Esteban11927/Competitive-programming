#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
    int n;
    long double x;
    cin >> n;
    cout << fixed << setprecision(0);
    while(n--){
        cin >> x;
        cout << floor(pow(2, x)/12000) << " kg\n";
    }
    return 0;   
}