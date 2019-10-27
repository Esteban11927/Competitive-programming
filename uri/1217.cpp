#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main(){
    int n;
    double money, wcount, ansmoney, definitiveans = 0;
    string s;
    cin >> n;
    vector<double> prices;
    for(int l = 1; l <= n; l++){
        cin >> money;
        prices.emplace_back(money);
        cin.ignore();
        getline(cin, s);

        wcount = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i-1] == ' ' && s[i] != ' ') wcount++;
        }
        
        ansmoney = 0;
        for(int i = 0; i < prices.size(); i++){
            ansmoney += prices[i];
        }

        definitiveans += wcount;
        cout << "day " << l << ": " << wcount << " kg\n";
        wcount = 0;
    }
    cout << fixed << setprecision(2);
    cout << definitiveans / n << " kg by day\n";
    cout << "R$ " << ansmoney / n << " by day\n";
    return 0;
}