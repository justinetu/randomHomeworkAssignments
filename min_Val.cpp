#include <iostream>
using namespace std;

template <class T>
T minVal(T val1, T val2) {
	if (val1 < val2)
		return val1;
	return val2;
}

template <class T, class U>
T minVal(U vals[], T size) {
	vals[size];
	T min = vals[0];
	for (T i = 1; i < size; i++) {
		if (vals[i] < min)
			min = vals[i];
	}
	return min;
}

int main() {
	double d1 = 13.2, d2 = 10.6;
	int array[4]{ 56, 10, 55, 25 };
	cout << "For doubles, the smallest value is: ";
	cout << minVal(d1, d2) << endl;
	char a = 'b', b = 'd';
	cout << "\nFor characters, the smallest char is: ";
	cout << minVal(a, b) << endl;
	cout << "\nFor the array, the smallest value is: ";
	cout << minVal(array, 4);

	return 0;
}
