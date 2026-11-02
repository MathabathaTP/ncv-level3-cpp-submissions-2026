#include <iostream>
using namespace std;

int main(){

int ncvLevel;           // declaration of interger
int testMark;           // declaration of interger
double classAverage;    //  declaration of double
string poeComplete;     // declaration of string
ncvLevel = 2;           // assign the value to tghe NCV Level
testMark = 36;          //assign the value to tghe Test mark
classAverage = 65.55;   // assign the value to tghe Class average
poeComplete = "yes";    // assign the value to tghe POE complete
const float vat = 0.15;

// displaying all the values
cout << "NCV Level:   "<< ncvLevel<< endl << "VAT is:   " << vat << endl ;
cout << "class Average:   "<< classAverage<< endl;
cout << "POE Complete:   "<< poeComplete<< endl;
cout << "Test Mark:   "<< testMark << endl;

return 0;
}
