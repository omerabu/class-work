#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaring variables for product details
    string productName = "mobile";               
    int productCategory = 2;                     
    int inventoryQuantity = 100;                 
    float productPricePerUnit = 599.99;          
    int itemsSold = 25;                          

    
    int newInventory;                            
    float totalSalesAmount;                      
    string inventoryStatus;                      

    
    newInventory = inventoryQuantity - itemsSold;

    
    totalSalesAmount = itemsSold * productPricePerUnit;

    
    if (newInventory < 10) {
        inventoryStatus = "Low Inventory";
    } else {
        inventoryStatus = "Sufficient Inventory";
    }

    
    cout << "Product Details:" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Category: " << productCategory << endl;
    cout << "Initial Inventory: " << inventoryQuantity << endl;
    cout << "Price per Unit: $" << productPricePerUnit << endl;
    cout << "Items Sold: " << itemsSold << endl;

    // Outputting the computed results
    cout << "\nComputed Values:" << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    return 0;
}

