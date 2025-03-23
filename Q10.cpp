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

    if (productCategory >= 1 && productCategory <= 5) {
        cout << "Valid product category." << endl;
    } else {
        cout << "Invalid product category. Please enter a value between 1 and 5." << endl;
    }

    switch (productCategory) {
        case 1:
            cout << "Category 1: Electronics" << endl;
            break;
        case 2:
            cout << "Category 2: Groceries" << endl;
            break;
        case 3:
            cout << "Category 3: Clothing" << endl;
            break;
        case 4:
            cout << "Category 4: Stationery" << endl;
            break;
        case 5:
            cout << "Category 5: Miscellaneous" << endl;
            break;
        default:
            cout << "Invalid category" << endl;
            break;
    }

    inventoryQuantity -= itemsSold;
    float totalSalesAmount = itemsSold * productPrice;

    string inventoryStatus = (inventoryQuantity < 10) ? "Low Inventory" : "Sufficient Inventory";

    cout << "\nNew Inventory: " << inventoryQuantity << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;

    return 0;
}

