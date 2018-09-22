#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    //Aufgabe 1
    string s1("Alle Jahre kommt ..."),
           s2("wieder");
    cout << s1 << endl;
    int pos = s1.find("kommt");
    if (pos != string::npos)
        s1.insert(pos,s2);
    cout << s1 << endl;
    pos = s1.find("kommt");
    if (pos != string::npos)
        s1.erase(pos+5);
    cout << s1 << endl;
    pos = s1.find("Jahre");
    if (pos != string::npos){
        s1.erase(pos,5);
        s1.insert(pos,"kommen");
    }
    cout << s1 << endl;

    //Aufgabe 2
    string ein;
    int len;
    while(ein != "nein"){
    cout << "Geben sie ein Wort ein oder nein zum beenden!" << endl;
    cin >> ein;
    len = ein.length();
    string teil = ein.substr(len/2, len-1);
    reverse(teil.begin(), teil.end());

    if(ein.substr(0,len/2) == teil )
        cout << ein << " ist ein Palindrom!" << endl;
    else
        cout << ein <<" ist kein Palindrom!" << endl;

    };

    return 0;
}
