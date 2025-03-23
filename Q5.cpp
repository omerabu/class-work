#include <iostream>
#include <string>
using namespace std;

int main() {
    // Product details
    string productName = "Laptop";               // Product name
    int inventoryQuantity = 100;                 // Initial inventory quantity
    float productPricePerUnit = 799.99f;         // Product price per unit
    int itemsSold = 25;                          // Number of items sold

    // Calculating total sales amount
    float totalSalesAmount = itemsSold * productPricePerUnit;

    // Creating a helper variable using 'auto' to hold a copy of total sales amount
    auto totalSalesCopy = totalSalesAmount;

    // Creating another helper variable using 'decltype' to deduce the type of inventoryQuantity
    decltype(inventoryQuantity) newInventory = inventoryQuantity - itemsSold;

    // Output the values
    cout << "Product Name: " << productName << endl;
    cout << "Initial Inventory: " << inventoryQuantity << endl;
    cout << "Items Sold: " << itemsSold << endl;
    cout << "Product Price per Unit: $" << productPricePerUnit << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;

    // Output the helper variables
    cout << "\nHelper Variables:" << endl;
    cout << "Total Sales Copy: $" << totalSalesCopy << endl;
    cout << "New Inventory: " << newInventory << endl;

    return 0;
}

