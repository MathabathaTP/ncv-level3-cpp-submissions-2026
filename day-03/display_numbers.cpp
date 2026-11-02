#include <iostream>
using namespace std;

int main(){
int num,sum;
float average;

for (int i =1;i<=5; i++){
    cout<< "please enter Number :  "<< i;
    cin>> num;
    sum =sum+num;
    average = sum/5;
}
cout<< "sum :  "<< sum<< endl << "average  :  "<< average;
return 0;
}
