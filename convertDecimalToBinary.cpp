#include <iostream>
#include <string>

using namespace std;

int reverse(string str);
int main()
{
  int n = 35;
  int rem;
  string s = "";
  while(n > 0) {
      rem = n % 2;
      s = s + std::to_string(rem);
      n = n/2;
  }
  cout << 35 << " in binary is " << reverse(s);

    return 0;
}

int reverse(string s) {
    string temp = "";
    char ch;
    int N = s.length();

    for(int i = 0; i < N; i++) {
        ch = s.at(i);  
        temp = ch + temp; // Adding each number from the front of the string to the back
        
    }
    return stoi(temp); // Type casting string to integer
}
