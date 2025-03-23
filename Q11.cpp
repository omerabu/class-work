#include <iostream>
#include <string>
using namespace std;

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

    for (int i = 1; i <= itemsSold; ++i) {
        cout << "Item " << i << ": $" << productPrice << endl;
    }

    inventoryQuantity -= itemsSold;
    float totalSalesAmount = itemsSold * productPrice;

    string inventoryStatus = (inventoryQuantity < 10) ? "Low Inventory" : "Sufficient Inventory";

    cout << "\nNew Inventory: " << inventoryQuantity << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    return 0;
}

