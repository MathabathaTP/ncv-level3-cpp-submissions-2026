#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantityInStock;

public:
    Product();

    void setProduct(string nm, double pr, int qty);

    string getProductName();
    double getPrice();
    int getQuantityInStock();
};


//Default constructor
Product::Product()
{
    productName = "";
    price = 0;
    quantityInStock = 0;
}


//Setter method
void Product::setProduct(string nm, double pr, int qty)
{
    if(nm != "")
        productName = nm;
    else
        productName = "Unknown";

    if(pr >= 0)
        price = pr;
    else
        price = 0;

    if(qty >= 0)
        quantityInStock = qty;
    else
        quantityInStock = 0;
}


//Getter methods
string Product::getProductName()
{
    return productName;
}

double Product::getPrice()
{
    return price;
}

int Product::getQuantityInStock()
{
    return quantityInStock;
}


int main()
{
    Product p1;

    p1.setProduct("White Bread", 16.80, 10);

    cout<<"Product Name: "<<p1.getProductName()<<endl;
    cout<<"Price: R"<<p1.getPrice()<<endl;
    cout<<"Quantity in Stock: "<<p1.getQuantityInStock()<<endl;

    return 0;
}
