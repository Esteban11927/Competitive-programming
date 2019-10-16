#include<iostream>
using namespace std;
int main(){
    int n;
    string s, t;
    cin >> n;
    while(n--){
        cin >> s >> t;
        if(s == t) cout << "empate\n";

        if(s == "tesoura" && t == "papel") cout << "rajesh\n";
        if(s == "papel" && t == "pedra") cout << "rajesh\n";
        if(s == "pedra" && t == "lagarto") cout << "rajesh\n";
        if(s == "lagarto" && t == "spock") cout << "rajesh\n";
        if(s == "spock" && t == "tesoura") cout << "rajesh\n";
        if(s == "tesoura" && t == "lagarto") cout << "rajesh\n";
        if(s == "lagarto" && t == "papel") cout << "rajesh\n";
        if(s == "papel" && t == "spock") cout << "rajesh\n";
        if(s == "spock" && t == "pedra") cout << "rajesh\n";
        if(s == "pedra" && t == "tesoura") cout << "rajesh\n";

        if(t == "tesoura" && s == "papel") cout << "sheldon\n";
        if(t == "papel" && s == "pedra") cout << "sheldon\n";
        if(t == "pedra" && s == "lagarto") cout << "sheldon\n";
        if(t == "lagarto" && s == "spock") cout << "sheldon\n";
        if(t == "spock" && s == "tesoura") cout << "sheldon\n";
        if(t == "tesoura" && s == "lagarto") cout << "sheldon\n";
        if(t == "lagarto" && s == "papel") cout << "sheldon\n";
        if(t == "papel" && s == "spock") cout << "sheldon\n";
        if(t == "spock" && s == "pedra") cout << "sheldon\n";
        if(t == "pedra" && s == "tesoura") cout << "sheldon\n";
    }
    return 0;
}