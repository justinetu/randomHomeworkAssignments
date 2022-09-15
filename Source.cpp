#include "ArrayPractice.h"

using namespace std;
int main() {
    int values[5], i, max, min, total, *p, prod;
    int A[10] = {24,5,67,23,88,90,12,6, 2,4};
    cout << "Enter 5 numbers\n";
    for(i = 0; i < 5; ++i) 
        cin >> values[i];
    /*function call*/
    // variable max stores value returned by function maximum
    max = maximum(values, 5);
    min = minimum(values, 5);
    p = &prod;
    total = Prodsum(values, 5, p);
    cout << "\nMaximum value of the elements in the array is " << max;
    cout << "\nMinimum value of the elements in the array is " << min;
    cout << "\nSum of the elements of the array is equal to " << total;
    cout << "\nThe product of the elements in the array is equal to " << prod;
    min = FindMinMax(A, 10, p);
    cout << "\n\nThe minimum value in the array A is " << min;
    return 0;
}
