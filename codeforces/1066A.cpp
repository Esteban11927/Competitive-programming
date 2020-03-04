#include<iostream>
using namespace std;
int main(){
	int t, l, v, a, b;
	cin >> t;
	while(t--){
		cin >> l >> v >> a >> b;
		a += a%v;
		b -= b%v;
        cout << a << ' ' << b << '\n';
		cout << max(0, l/v - abs(b-a)/v - 1) << '\n';
	}
	return 0;
}