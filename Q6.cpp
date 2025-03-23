#include <iostream>
using namespace std;


#define TAX_RATE_PREPROCESSOR 0.08  

int main() {
    
    const double TAX_RATE_CONST = 0.08;  

    
    double price = 100.0;

    
    double taxUsingPreprocessor = price * TAX_RATE_PREPROCESSOR;
    double taxUsingConst = price * TAX_RATE_CONST;

    
    cout << "Price: $" << price << endl;
    cout << "Tax using preprocessor directive (8%): $" << taxUsingPreprocessor << endl;
    cout << "Tax using const keyword (8%): $" << taxUsingConst << endl;

    return 0;
}

