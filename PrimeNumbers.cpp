#include <iostream>

/*
	Homework Assignment
	1. Write a function isPrime(int i) that returns true if i is prime, false otherwise.
	2. The isPrime() function must be in the namespace primes.
	3. Use isPrime() to print all prime numbers between start and end of the input range.
	4. Check for correct input, range etc.

*/






namespace primes {
    
    bool isPrime(int i) {
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
            return false;
        }
        return true;
    }
    
    void isPrime(int start, int end) {
        for(int i = start; i <= end; i++) {
            if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
                
        }
            else {
                std::cout << i << " ";
            }
        
        }
    }

}

using std::cin;
using std::endl;
int main()
{
    
    while(true) {
        std::cout << "Enter a number to see whether it's prime >> ";
        int num = 0;
        std::cin >> num;
        if(std::cin.fail()) {
        std::cout << "That's not a valid number. Try again. \n";
        std::cin.clear();
        std::cin.ignore(100 , '\n');
        continue;
    }
        else if(num < 1) {
            std::cout << "Number must be greater than  0. Try again." << std::endl;
            continue;
            
        }
        
    
        else {
            if(primes::isPrime(num) == 1) {
            std::cout << "true";
            std::cout << endl;
            
        }
            if(primes::isPrime(num) != 1) {
                std::cout << "false";
                std::cout << endl;
            }
        }
        
        while(true) {
            // Get a start value
            std::cout << "Enter a start value >> ";
            int start = 0;
            cin >> start;
        
            // Error checking
            if(std::cin.fail()) {
                std::cout << "That's not a valid number. Try again. \n";
                std::cin.clear();
                std::cin.ignore(100 , '\n');
                continue;
        }
            else if(start < 1) {
                std::cout << "Number must be greater than  0. Try again." << std::endl;
                continue;
            }
            
            // Get an end value
            std::cout << "Enter an end value >> ";
            int end = 0;
            std::cin >> end;
            
            // Error checking
            if(std::cin.fail()) {
                std::cout << "That's not a valid number. Try again. \n";
                std::cin.clear();
                std::cin.ignore(100 , '\n');
                continue;
        }
            else if(end < 1) {
                std::cout << "Number must be greater than  0. Try again." << std::endl;
                continue;
            }
            
            else if(end < start) {
                std::cout << "Number must be greater than or equal to start value. Try again." << std::endl;
                continue;
            }
            
            else {
                primes::isPrime(start, end);
            }
            break;
        }
        break;
    }

    return 0;
}