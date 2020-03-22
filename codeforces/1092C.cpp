#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<string> vec[300], order;
map<string, string> mapa, mapb;
map<string, bool> used;
int n;


string check(string s){
    string ans;
    for(int i = 1; i < n; i++){
        //cout << i << ' ' << vec[i][0] << ' ' << vec[i][1] << ' ' << s.substr(0, i) << '\n';
        if(vec[i][0] == s.substr(0, i)){
            mapa[vec[i][0]] = "P";
            mapb[vec[i][1]] = "S";
        }
        else if(vec[i][1] == s.substr(0, i)){
            mapa[vec[i][0]] = "S";
            mapb[vec[i][1]] = "P";
        }
    }
    //cout << order.size() << '\n';
    for(int i = 0; i < order.size(); i++){
        if(used[order[i]] == false && mapa.find(order[i]) != mapa.end()){
            ans += mapa[order[i]];
            used[order[i]] = true;
        }
        else if(mapb.find(order[i]) != mapb.end()) ans += mapb[order[i]];
        //cout << ans << ' ' << mapa[order[i]] << ' ' << mapb[order[i]] << '\n';
    }
    return ans;
    
}

bool chack(string s, string ss){
    for(int i = 0; i < order.size(); i++){
        if(s[i] == 'P' && ss.substr(0, order[i].size()) == order[i]) continue;
        if(s[i] == 'S' && ss.substr(n-order[i].size(), order[i].size()) == order[i]) continue;
        return false;
    }
    return true;
}


int main(){
    string s, ss, sss, ssss, sssss, ssssss, sssssss, ssssssss;
    cin >> n;
    for(int i = 0; i < 2*n-2; i++){
        cin >> s;
        vec[s.size()].emplace_back(s);
        order.emplace_back(s);
    }
     s = vec[1][1] + vec[n-1][0];
     ss = vec[n-1][0] + vec[1][1];
     
     sss = vec[1][0] + vec[n-1][0];
     ssss = vec[n-1][0] + vec[1][0];

     sssss = vec[1][1] + vec[n-1][1];
     ssssss = vec[n-1][1] + vec[1][1];
     
     sssssss = vec[1][0] + vec[n-1][1];
     ssssssss = vec[n-1][1] + vec[1][0];
    
    //cout << s << ' ' << ss << '\n';
    string a = check(s);
    mapa.clear(); mapb.clear(), used.clear();
    string b = check(ss);
    mapa.clear(); mapb.clear(), used.clear();
    string c = check(sss);
    mapa.clear(); mapb.clear(), used.clear();
    string d = check(ssss);
    mapa.clear(); mapb.clear(), used.clear();
    string e = check(sssss);
    mapa.clear(); mapb.clear(), used.clear();
    string f = check(ssssss);
    mapa.clear(); mapb.clear(), used.clear();
    string g = check(sssssss);
    mapa.clear(); mapb.clear(), used.clear();
    string h = check(ssssssss);

    //cout << b << ' ' << ss << '\n';
    if(a.size() == 2*n-2 && chack(a, s)) cout << a << '\n';
    else if(b.size() == 2*n-2 && chack(b, ss)) cout << b << '\n';
    else if(c.size() == 2*n-2 && chack(c, sss)) cout << c << '\n';
    else if(d.size() == 2*n-2 && chack(d, ssss)) cout << d << '\n';
    else if(e.size() == 2*n-2 && chack(e, sssss)) cout << e << '\n';
    else if(f.size() == 2*n-2 && chack(f, ssssss)) cout << f << '\n';
    else if(g.size() == 2*n-2 && chack(g, sssssss)) cout << g << '\n';
    else if(h.size() == 2*n-2 && chack(h, ssssssss)) cout << h << '\n';
    
    return 0;
}