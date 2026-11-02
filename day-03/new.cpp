#include <iostream>
using namespace std;

int main(){
int numb1,numb2;
string messege ="Not Even";
cout << "please enter first number"<< endl;
cin >> numb1;
cout << "please enter Second number" <<endl;
cin >> numb2;

if ((numb1 % 2) == 0 && (numb2 % 2) == 0){

    messege = "Even";
}

cout << messege<<endl;

return 0;
}
