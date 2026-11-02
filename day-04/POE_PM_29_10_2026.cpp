#include <iostream>
using namespace std;

const int SIZE = 5;

//Function to get numbers
void getNumbers(int num[], int sz)
{
    for(int x = 0; x < sz; x++)
    {
        cout<<"Enter number "<< x + 1<<" : ";
        cin>>num[x];
    }
}

//1. Function to count even numbers
int countEven(int num[], int sz)
{
    int count = 0;

    for(int x = 0; x < sz; x++)
    {
        if(num[x] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

//2. Function to display odd numbers
void displayOdd(int num[], int sz)
{
    cout<<"Odd numbers: ";

    for(int x = 0; x < sz; x++)
    {
        if(num[x] % 2 != 0)
        {
            cout<<num[x]<<" ";
        }
    }

    cout<<endl;
}

//3. Function to sort values in ascending order
void sortValues(int num[], int sz)
{
    int temp;

    for(int x = 0; x < sz - 1; x++)
    {
        for(int y = x + 1; y < sz; y++)
        {
            if(num[x] > num[y])
            {
                temp = num[x];
                num[x] = num[y];
                num[y] = temp;
            }
        }
    }
}

//4. Function to display values stored in the array
void displayValues(int num[], int sz)
{
    cout<<"Sorted values: ";

    for(int x = 0; x < sz; x++)
    {
        cout<<num[x]<<" ";
    }

    cout<<endl;
}

int main()
{
    int numb[SIZE];

    //call getNumbers
    getNumbers(numb, SIZE);

    //1. Count even numbers
    cout<<"Number of even numbers: "<<countEven(numb, SIZE)<<endl;

    //2. Display odd numbers
    displayOdd(numb, SIZE);

    //3. Sort the array
    sortValues(numb, SIZE);

    //4. Display sorted array
    displayValues(numb, SIZE);

    return 0;
}
