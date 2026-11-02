#include <iostream>
#include <iomanip>
using namespace std;

int main(){

double avg1 = (70 + 85 + 90) / 3;     // 81
double avg2 = (70 + 85 + 90) / 3.0;   // 81.6667

int total = 245, tests = 3;
double avg3 = static_cast<double>(total) / tests;  // 81.6667
double avg4 = static_cast<double>(total / tests);  // 81
int num = static_cast<double>('C');    // 81
int whole = 9.99;

cout<< "Average 1"<< avg1<<"\n";
cout<< "Average 2"<<setprecision(2)<< avg2<<"\n";
cout<< fixed << setprecision(2)<<avg1<<"\n";

cout<< "Average 3"<< avg3<<"\n";
cout<< "Average 4"<< avg3<<"\n";
cout<< "Num:    "<< num <<"\n";

return 0;
}
