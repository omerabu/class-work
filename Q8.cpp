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

    inventoryQuantity -= itemsSold;
    float totalSalesAmount = itemsSold * productPrice;

    cout << "\nNew Inventory: " << inventoryQuantity << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;

    return 0;
}

