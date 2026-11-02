#include <iostream>
using namespace std;

int main(){
int timeInMinutes;
int timeHours;
int timeMinuteout;


cout << "Please enter time in minutes" << endl;
cin >> timeInMinutes;
timeHours = timeInMinutes/60;
timeMinuteout = timeInMinutes % 60;
cout << "Time is:    " << timeHours <<" Hrs  "<< timeMinuteout <<" minutes" << endl;


return 0;
}
