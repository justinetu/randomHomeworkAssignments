/* As a side note this is not my code originally. This code comes from https://www.youtube.com/watch?v=AsujPjvwA_Q. I simply changed the code by adding
   adding exception handling.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream> // Required to use ostringstream and istringstream
using namespace std;

class nullFile{};
bool openFile(string InputFileName) {
    ifstream in;
    in.open(InputFileName.c_str());
    
    if(!in) {
        throw nullFile();
        return false;
		exit(0);
	}
	else {
	    string first;
		string last;
		string fullName;
		ostringstream os;
		os << fixed << showpoint << setprecision(2);

		in >> first;
		in >> last;
		fullName = first + ' ' + last;
		int SingleScore = 0; // Stores single score
		int sum = 0;
		int HowmanyTests = 0;

		os << "Hello " << fullName << endl;
		os << "Here are your test scores: ";
		//First score
		in >> SingleScore;

		while (SingleScore >= 0) {
			// There are data to be processed
			os << SingleScore << ", ";
			sum += SingleScore;
			HowmanyTests++;
			in >> SingleScore;
		}
		os << endl;

		if (HowmanyTests != 0) { // if #2
			// process for record that had real values
			double RealAverage = double(sum) / HowmanyTests;
			int roundedAverage = int(RealAverage + 0.5);
			// determine grade
			char grade = ' ';
			if (roundedAverage >= 90) {
				grade = 'A';
			}
			else if (roundedAverage >= 80) {
				grade = 'B';
			}
			else if (roundedAverage >= 70) {
				grade = 'C';
			}
			else if (roundedAverage >= 60) {
				grade = 'D';
			}
			else {
				grade = 'F';
			}
			// Add all data to be printed to ostringstream object
			os << "Sum of scores of all tests: " << sum << endl
				<< "Number of tests taken = " << HowmanyTests << endl
				<< "Real Average of all tests = " << RealAverage << endl
				<< "Rounded average of all tests = " << roundedAverage << endl
				<< "Your semester grade: " << grade << endl
			 	<< "*************************************************" << endl;
		} // end of if #2
		else {
			os << "You did not take any tests. " << endl
			<< "*************************************************" << endl;
		}
		//At this line my ostringstream object has all the data that I need to print
		cout << os.str();
		ofstream out;
		// bind to output file
		string OutputFileName;
		cout << "Enter full path to output file name: ";
		getline(cin, OutputFileName);

		out.open(OutputFileName.c_str());

		if (!out) {
			cout << "Error in creating output file. " << endl;
			cout << "Exiting program. " << endl;
			exit(1);
		}
		else {
			out << os.str() << endl;
		}
		out.close(); // Close output file
	} // end of else #1
	in.close();
	return true;
	}


int main() {
	

	string InputFileName;
	cout << "Type full path to the input file: ";
	getline(cin, InputFileName);

    try {
        openFile(InputFileName);
    } catch(nullFile n) {
        cout << "Error in file path: " << InputFileName << endl;
        cout << "Exiting the program." << endl;
    }
    
	return 0;
} 
