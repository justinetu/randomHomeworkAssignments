#include <iostream>
using namespace std;

class nulldiv {
    
};
class nulln{
    
};
double divide(int n, int d) {
    if(d == 0)
        throw nulldiv();
    else
        if(n == 0)
        throw nulln();
        return static_cast<double>(n)/d;

}
int main() {
    int num, den;
    cout << "Enter the first number >> ";
    cin >> num;
    cout << "\nEnter the second number >> ";
    double quotient;
    cin >> den;
    try {
        quotient = divide(num, den);
        cout << "\nThe quotient is " << quotient;
    } catch(nulldiv n) {
        cout << "Division by 0.\n";
    }
     catch(nulln n) {
        cout << "Numerator is 0.\n";
    }

    return 0;
}
