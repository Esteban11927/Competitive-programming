#include<iostream>
using namespace std;
int main(){
	int t, l, v, a, b;
	cin >> t;
	while(t--){
		cin >> l >> v >> a >> b;
		cout << l/v << ' ' << b/v << ' ' << a/v << ' ' << a%v << '\n';
		cout << l/v - (b/v-a/v + (a%v == 0)) << '\n';
	}
	return 0;
}