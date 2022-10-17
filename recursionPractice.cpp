#include <iostream>

using namespace std;
double power(double base, int p) {
    if(p == 0) {
        return 1;
    }
    if(p == 1) {
        return base;
    }
    else {
        double num = base;
        return num * power(base, p - 1);
    }  
}
int main()
{
    double b;
    int p;
    
    cout << "Enter the base and the power to which to raise the base. " << endl;
    cout << ">> ";
    cin >> b;
    cout << endl << ">> ";
    cin >> p;
    cout << b << " raised to the power " << p << " is " << power(b,p);

    return 0;
}
