#include <iostream>
using namespace std;

int main(){
char gender;
string message = "Invalid entry";
cout << "Please Enter Gender M = Male F =female"<<endl;
cin>> gender;

if (gender == 'M' || gender == 'm'){
    message = "Your gender is male";
}
else if (gender == 'F' || gender == 'f'){
    message = "Your gender is Female";
}
cout << message<< endl;
return 0;
}
