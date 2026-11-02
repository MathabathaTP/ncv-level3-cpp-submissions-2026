#include <iostream>
using namespace std;

void getValues(int &num1, int &num2);
void calcSum(int num1, int num2);
void calcDiference(int num1, int num2);
void calcProduct(int num1, int num2);
void calcQuotient(int num1, int num2);

int main()
{
    int v1 = 0;
    int v2 = 0;

    getValues(v1, v2);

    calcSum(v1,v2);
    calcDiference(v1,v2);
    calcProduct(v1,v2);
    calcQuotient(v1,v2);

    return 0;

}

 void getValues(int &num1, int &num2)
{
    cout<<"Enter 2 values :   ";
    cin>>num1>>num2;
}

void calcSum(int num1, int num2)
{
    cout<<"The sum is:    "<< num1 + num2<<endl;
}

void calcDiference(int num1, int num2)
{
    cout<<"The Diference is:   "<< num1 - num2<<endl;
}

void calcProduct(int num1, int num2)
{
    cout<<"The product is:    "<< num1 * num2<<endl;
}

void calcQuotient(int num1, int num2)
{
    cout<<"The Quatient is:    "<< num1 / num2<<endl;
}
