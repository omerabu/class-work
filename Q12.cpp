#include <iostream>
#include <string>
using namespace std;

#define TAX_RATE_PREPROCESSOR 0.08

int main() {
    string productName;
    int productCategory;
    int inventoryQuantity;
    float productPrice;
    int itemsSold;

    cout << "Enter the product name: ";
    cin >> productName;

    cout << "Enter the product category (1-5): ";
    cin >> productCategory;

    cout << "Enter the initial inventory quantity: ";
    cin >> inventoryQuantity;

    cout << "Enter the product price: ";
    cin >> productPrice;

    cout << "Enter the number of items sold: ";
    cin >> itemsSold;

    const double TAX_RATE_CONST = 0.08;

    inventoryQuantity -= itemsSold;
    float totalSalesAmount = itemsSold * productPrice;

    string inventoryStatus = (inventoryQuantity < 10) ? "Low Inventory" : "Sufficient Inventory";

    auto totalSalesCopy = totalSalesAmount;
    decltype(inventoryQuantity) newInventory = inventoryQuantity;

    cout << "\nTax Rate from Preprocessor: " << TAX_RATE_PREPROCESSOR * 100 << "%" << endl;
    cout << "Tax Rate from const keyword: " << TAX_RATE_CONST * 100 << "%" << endl;

    cout << "\nProduct Details:" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Category: " << productCategory << endl;
    cout << "Initial Inventory: " << inventoryQuantity + itemsSold << endl;
    cout << "Product Price: $" << productPrice << endl;
    cout << "Items Sold: " << itemsSold << endl;

    cout << "\nComputed Values:" << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    cout << "\nHelper Variables:" << endl;
    cout << "Total Sales Copy: $" << totalSalesCopy << endl;
    cout << "New Inventory: " << newInventory << endl;

    return 0;
}

