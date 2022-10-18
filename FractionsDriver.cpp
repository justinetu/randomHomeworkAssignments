#include <iostream>
#include "FractionType.h"

using namespace std;

int main() {
    FractionType Improper(5,4);
    Improper.DisplayFraction();
    if(Improper.isNotProper() == 1)
        cout << "true" << "\n";
    else
        cout << "false" << "\n";
    
    FractionType F1(3,7);
    FractionType F2(5,7);
    FractionType sum = F1.operator +(F2);
    cout << "The sum of the fractions is: ";
    sum.DisplayFraction();
    cout << "Converting the sum of the fractions to a proper fraction we get: ";
    sum.convertToProper();
    sum.DisplayFraction();
    FractionType F3(3,7);
    FractionType F4(2,5);
    cout << "The product of the fractions is: ";
    FractionType product = F3.operator *(F4);
    product.DisplayFraction();
    return 0;
}
