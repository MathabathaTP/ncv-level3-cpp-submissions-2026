#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string Gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "What is your Gender ? Type m = male   and  f =female" << endl;
    getline(cin >> ws, Gender);
    cout << "Hello, " << name << endl;
    if (Gender == " m ") {
        cout <<  "     you are a clever gentleman, " << endl;
    }
    if (Gender == " f ") {
        cout << "    you are a lovely lady" << endl;
    }
    return 0;
}
