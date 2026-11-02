#include <iostream>
using namespace std;

int main(){
char gender;
string discription = "Invalid gender code" ;
cout << "Please Enter Gender M = Male F =female"<<endl;
cin>> gender;

switch(gender){
    case 'M':
    case 'm':
    discription = "Your gender is male";
    break;
    case 'F':
    case 'f':
    discription = "Your gender is Female";
    break;

}


cout << discription<< endl;
return 0;
}
