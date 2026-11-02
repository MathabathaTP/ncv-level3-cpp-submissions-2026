#include <iostream>
using namespace std;

int main(){

float length,width,area,parameter;

cout<< "please Enter Length:    ";
cin >> length;
cout << "Please Enter width:    ";
cin >> width;

area = length* width;
parameter = length* 2 + width* 2;

cout << "Your area is:   "<< area<<" m squaredbt "<< endl<< "Your Parameter is:    "<< parameter <<" m "<< endl;

return 0;
}
