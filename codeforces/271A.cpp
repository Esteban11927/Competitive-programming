#include<iostream>
using namespace std;
#define first(n) (n/1000)%10
#define second(n) (n/100)%10
#define third(n) (n/10)%10
#define fourth(n) n%10
int main(){
    int n;
    cin >> n;
    n++;
    while(first(n) == second(n) || first(n) == third(n) || first(n) == fourth(n) || second(n) == third(n) || second(n) == fourth(n) || third(n) == fourth(n)) n++;
    cout << n << '\n';
    return 0;
}