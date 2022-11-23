#include<iostream>
#include "List.h"
using namespace std;

int main(void)

{

    int A[5] = { 8,4,2,9,1 };

    try {

        List<int> L(10);

        for (int i = 0; i < 5; i++) {

            L.insertItem(A[i]);

            // cout << L.getSize() << endl; 

        }

        cout << "Displaying list\n";

        L.showStructure();
        L.insert(5);
        cout << endl;
        L.showStructure();
        //L.~List(); 
        cout << endl;
        L.remove(1);
        L.showStructure();

    }

    catch (NegSize N) {

        cout << " Negative size list" << endl; EXIT_FAILURE;

    }



    return 0;

}
