#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring variables for product details
    string productName;              
    int productCategory;              
    int inventoryQuantity;            
    float productPricePerUnit;        
    int itemsSold;                    

    
    productName = "mobile";               
    productCategory = 2;                  
    inventoryQuantity = 100;              
    productPricePerUnit = 599.99;         
    itemsSold = 25;                      

    
    cout << "Product Details:" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Category: " << productCategory << endl;
    cout << "Initial Inventory: " << inventoryQuantity << endl;
    cout << "Price per Unit: $" << productPricePerUnit << endl;
    cout << "Items Sold: " << itemsSold << endl;

    return 0;
}

