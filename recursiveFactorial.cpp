#include <iostream>

using namespace std;
int factorial(int n) {
    
   return n * factorial( n - 1);
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl << "The factorial of " << num << " is :";
    factorial(num);

    return 0;
}
