#include <iostream>
#include <cstdlib>
#include<iomanip>
using namespace std;
double calculateTotal(int, double, double, double); // Function prototypes
double calculateTotal(double, double);
int getDays();
double getDailyRate();
double getMedicationCharges();
double getHospitalServiceCost();
int main(int argc, char** argv) {
    
    // First, ask if the patient was admitted as in patient or out patient
    /* 
     If the patient was an in patient, ask for the number of days spent in
     the hospital, daily rate, hospital medication charges, and charges for 
     hospital charges like lab tests
     */
    /* 
     If the patient was an out patient, ask for charges for hospital 
     services like lab tests and hospital medication charges
     * 
     * The program should use two overloaded functions to calculate 
     * the total charges. One of the functions should accept the arguments 
     * for the in-patient data, while the other function accepts arguments for 
     * out-patient information. Both functions should return the total charges.
     * Input Validation: Do not accept negative numbers for any data.
    */
    int userChoice, numOfdaysInHospital;
    double dailyRate, medicationCharges, hospitalServices;
    cout << "Enter 1 if you're an in-patient or 2 if you're an out patient >> ";
    cin >> userChoice;
    while(userChoice != 1 && userChoice != 2) {
        cout << "Error. Wrong entry. Please enter 1 or 2. Try again.\n\n";
        cout << "Enter 1 if you're an in-patient or 2 if you're an out patient >> ";
        cin >> userChoice;
        
    }
    switch(userChoice) {
        case 1:
            numOfdaysInHospital = getDays();
            dailyRate = getDailyRate();
            medicationCharges = getMedicationCharges();
            hospitalServices = getHospitalServiceCost();
            cout << fixed << setprecision(2);
            cout << "\n\nYour total is: $" << calculateTotal(numOfdaysInHospital, dailyRate, 
                    medicationCharges, hospitalServices);
            break;
        case 2:
            hospitalServices = getHospitalServiceCost();
            medicationCharges = getMedicationCharges();
            cout << "\n\nYour total is: $" << calculateTotal(hospitalServices, medicationCharges);
            break;
        default:
            break;
    }
    
    return 0;
}
double calculateTotal(int days, double rate, double medicationCost, double hospitalServices) {
    return days * rate + medicationCost + hospitalServices;
}
double calculateTotal(double hospitalServices, double medicationCost) {
    return hospitalServices + medicationCost;
}
int getDays() {
    int days = 0;
    cout << "Enter the number of days spent in the hospital >> ";
    cin >> days;
    while(days < 0) {
        cout << "Number must be larger than 0. Try again\n\n";
        cout << "Enter the number of days spent in the hospital >> ";
        cin >> days;
    }
    return days;
}
double getDailyRate() {
    double rate;
    cout << endl << "Enter the daily rate >> $";
    cin >> rate;
    while(rate < 0) {
        cout << "Error. Faulty input. Please try again\n\n";
        cout << endl << "Enter the daily rate >> $";
        cin >> rate;
    }
    return rate;
}
double getMedicationCharges() {
    double medCharges;
    cout << endl << "Enter the medication charges >> $";
    cin >> medCharges;
    while(medCharges < 0) {
        cout << "Error. Faulty input. Please try again\n\n";
        cout << endl << "Enter the medication charges >> $";
        cin >> medCharges;
    }
    return medCharges;
}
double getHospitalServiceCost() {
    double serviceCost;
    cout << endl << "Enter the charges for hospital services e.g lab tests >> $";
    cin >> serviceCost;
    while(serviceCost < 0) {
        cout << "Error. Faulty input. Please try again\n\n";
        cout << endl << "Enter the charges for hospital services e.g lab tests >> $";
        cin >> serviceCost;
    }
    return serviceCost;
}
