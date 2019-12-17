#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long double s1, s2, s3, a, b, c;
    cin >> s1 >> s2 >> s3;
    a = sqrt(s1*s2*s3)/s3;
    b = sqrt(s1*s2*s3)/s2;
    c = sqrt(s1*s2*s3)/s1;
    cout << 4*(a+b+c) << '\n';
    return 0;
}