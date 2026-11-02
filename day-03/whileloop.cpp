#include<iostream>
using namespace std;

int main()
{

    // Declare variables
    int num, sum =0,avg=0, count =1;

    // Prompt and get values
    sum = 0;
    // Part 1: initialise
    cout << "Enter number " << count << ": ";
    cin >> num;


    while(num!=-1)// Part condition
    {
        cout << num<< " : ";
        count++;

        //Part 3: update(reprompt)
        cout << "Enter number " << count << ": ";
        cin >> num;

    }



    return 0;
}
