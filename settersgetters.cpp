#include <iostream>
#include <string>
using namespace std;
class person {
    private:
	    string name;
	    int age;
	    char gender;
    public:
        void setName(string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
        void setGender(char g) {
            gender = g;
        }
        string getName() {
            return name;
        }
        int getAge() {
            return age;
        }
        char getGender() {
            return gender;
        }      
};
int main() {
    person *me;
    me = new person;
    me ->setAge(21);
    me ->setName("Justin");
    me ->setGender('M');
    cout << "Hello my name is " << me ->getName() << endl;
    cout << "I'm " << me -> getAge() << " years old" << endl;
    cout << "My gender is " << me -> getGender() << endl;
	return 0;
}
