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

    cout << "\nProduct Name: " << productName << endl;
    cout << "Product Category: " << productCategory << endl;
    cout << "Initial Inventory: " << inventoryQuantity << endl;
    cout << "Product Price: $" << productPrice << endl;
    cout << "Items Sold: " << itemsSold << endl;

    return 0;
}

