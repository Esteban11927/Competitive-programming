#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;
    map<string, string> mapa;
    
    mapa["brasil"] = "Feliz Natal!";
    mapa["alemanha"] = "Frohliche Weihnachten!";
    mapa["austria"] = "Frohe Weihnacht!";
    mapa["coreia"] = "Chuk Sung Tan!";
    mapa["espanha"] = "Feliz Navidad!";
    mapa["grecia"] = "Kala Christougena!";
    mapa["estados-unidos"] = "Merry Christmas!";
    mapa["inglaterra"] = "Merry Christmas!";
    mapa["australia"] = "Merry Christmas!";
    mapa["portugal"] = "Feliz Natal!";
    mapa["suecia"] = "God Jul!";
    mapa["turquia"] = "Mutlu Noeller";
    mapa["argentina"] = "Feliz Navidad!";
    mapa["chile"] = "Feliz Navidad!";
    mapa["mexico"] = "Feliz Navidad!";
    mapa["antardida"] = "Merry Christmas!";
    mapa["canada"] = "Merry Christmas!";
    mapa["irlanda"] = "Nollaig Shona Dhuit!";
    mapa["belgica"] = "Zalig Kerstfeest!";
    mapa["italia"] = "Buon Natale!";
    mapa["libia"] = "Buon Natale!";
    mapa["siria"] = "Milad Mubarak!";
    mapa["marrocos"] = "Milad Mubarak!";
    mapa["japao"] = "Merii Kurisumasu!";
    
    while(getline(cin, s)){
        if(mapa[s].size() != 0) cout << mapa[s] << '\n';
        else cout << "--- NOT FOUND ---\n";
    }
    return 0;
}