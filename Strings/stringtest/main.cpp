#include <iostream>
#include <string>

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
    return 0;
}
