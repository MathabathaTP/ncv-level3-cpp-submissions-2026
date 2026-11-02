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

void getProducsData(Product &pt)
{
    string pd;
    double prc;
    int qua;

    cout<< "Enter a product name:   ";
    cin>>pd;
    cout<< "Enter product Price for  "<<pd<<"  :   ";
    cin>>prc;
    cout<< "Enter Quantity in stock for    :   ";
    cin>>qua;

    pt.setProduct(pd,prc,qua);
}

void displayProductInfo(Product &pt)
{
    cout<<"Product Name: "<<pt.getProductName()<<endl;
    cout<<"Price: R"<<pt.getPrice()<<endl;
    cout<<"Quantity in Stock: "<<pt.getQuantityInStock()<<endl;
}



void compareProducts(Product &p1, Product &p2)
{
    string product1 = p1.getProductName();
    string product2 = p2.getProductName();

    if(product1[0] == product2[0])
        cout<<"The two product names start with the same character";
    else
        cout<<"The two product names do not start with the same character";
}
int main()
{
    Product p1;
    Product p2;

    getProducsData(p1);
    displayProductInfo(p1);
    getProducsData(p2);
    displayProductInfo(p2);
    compareProducts(p1,p2);
    return 0;
}
