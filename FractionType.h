#pragma once
/*
  Tasks:
  -Create  the object Improper = 5/4
  -Call the member function DisplayFraction to display Improper.
  -Call the member function IsNotProper on Improper  and display its return value.
  -Create two fractions F1 and F2 with these respective values (3/7) and (5/7)
  -Use the overloaded + operator to get their sum (see implementation below)
  -Use the member function convertToProper to convert the result of the addition into a proper fraction.
  -The product of 2 fractions is defined as the product of their numerators over the product of their denominators. Example: 2/3 * 4/5= 8/15
  -Using the code of overloading the operator + as an example, write  the code that overloads the operator * and returns the product of two fractions.
  -FractionType FractionType:: operator+ (const FractionType& F1) { 
    
	  if (this->denom == F1.denom) {
      FrationType Result;
		  Result.num = this->num + F1.num;
		  Result.denom = this->denom;
		  return Result;
	  }
	else return FractionType();

}
Create two fractions with these respective values  (3/7) and (2/5) and display their product using your defined * operator.
*/
class FractionType
{
    
    public:
        FractionType(int Numerator, int Denominator);
        FractionType();
        void setNumerator(int N);
        void setDenominaor(int D);
        void DisplayFraction();
        
    
        int GetNumerator();
        int GetDenominator();
        int convertToProper();
    
        bool isZero();
        bool isNotProper();
        
        FractionType operator+(const FractionType& f);
        FractionType operator*(const FractionType& f);
        
    private:
        int num, denom;
};
