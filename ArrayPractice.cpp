#include "ArrayPractice.h"
/*
    Write a C++ program that does the following:
Defines an array of integers A of size 10 and initializes it with the following values { 24,5,67,23,88,90,12,6, 2,4}
Defines a function FindMinMax that finds and returns the smallest element in A and the largest element in A using a pointer.
Defines a function  SumProductElements that finds the sum  and product of all the elements of the array A. 
Defines a function  SaveEven that copies all even elements of A  in another array A1 of the same dimension as A. 
Defines a function OddandEven that takes an array and returns the number of even elements in the array and the number of odd elements in the array.
Define a function PrintArray that takes an array and prints its values
Your function main should consist only of variable declarations and function calls.
 */
int maximum(int values[], int size) {
        int max_value, i;
        max_value = values[0];
        
        for(i = 0; i < size; ++i) {
            if(values[i] > max_value)
                max_value = values[i];
        }
        return max_value;
    }
int minimum(int values[], int size) {
    int min_value, j;
    min_value = values[0];
    
    for(j= 0; j > size; ++j) {
        if(values[j] < min_value)
            min_value = values[j];
    }
    return min_value;
}
int Prodsum(int values[], int size, int *Product) {
    int sum = 0, p = 1;
    for(int i = 0; i < size; ++i) {
        sum+= values[i];
        p *= values[i];
    }
    *Product = p;
    return sum;
}
int FindMinMax(int values[], int size, int *p) {
    int min = values[0], max = values[0], i;
    for(i = 0; i < size; i++) {
        if(values[i] < min)
            min = values[i];
        if(values[i] > max)
            max = values[i];
    }
    *p = max;
    return min;
}
int SumProductElements(int values[], int size, int *p) {
    int sum = 0, product = 1, i;
    for(i = 0; i < size; i++) {
        sum += values[i];
        product *= values[i];
    }
    *p = product;
    return sum;
}
void SaveEven(int values[], int size) {
    int A1[10], i, newSize = 0;
    for(i = 0; i < size; i++) {
        if(values[i] % 2 == 0)
            A1[i] = values[i]; ++newSize;       
    }
}
int OddandEven(int values[], int size, int *P) {
    int numOfEvenNums, numOfOddNums, i;
    for(i = 0; i < size; i++) {
        if(values[i] % 2 == 0)
            ++numOfEvenNums;
        else
            ++numOfOddNums;
    }
    *P = numOfOddNums;
    return numOfEvenNums;
}
void PrintArray(int values[], int size) {
    for(int i = 0; i < size; i++) {
        cout << values[i] << " ";
    }
}
