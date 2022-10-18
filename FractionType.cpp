#include "FractionType.h"
#include <iostream>

using namespace std;

 FractionType::FractionType(int Numerator, int Denominator) {
    num = Numerator;
    denom = Denominator;
}
 void FractionType::setNumerator(int N) {
     num = N;
 }
void FractionType::setDenominaor(int D) {
    denom = D;
}
void FractionType::DisplayFraction() {
    cout << num;
    cout << "/";
    cout << denom << endl;
}
    
int FractionType::GetNumerator() {
    return num;
}
int FractionType::GetDenominator() {
    return denom;
}
 int FractionType::convertToProper() {
    int result;
    result =  num/denom;
    num = num % denom;
    if(num == 0)
        denom = 1;
    return result;
 }
    
 bool FractionType::isZero() {
     if(num == 0)
         return true;
     return false;
            
 }
  bool FractionType::isNotProper() {
       if(num > denom)
           return true;
       return false;
}

  FractionType::FractionType() {
      num = 0;
      denom = 1;
  }
  
  FractionType FractionType::operator+ (const FractionType& F1) {
      FractionType Result;
      if(this->denom == F1.denom) {
          Result.num = this->num + F1.num;
          Result.denom = this->denom;
          return Result;
      }
      else return FractionType();
  }
  FractionType FractionType::operator* (const FractionType& F1) {
      FractionType Result;
      Result.num = this->num * F1.num;
      Result.denom = this->denom * F1.denom;
      return Result;
      
  }
