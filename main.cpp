#include <iostream>
#include <string>
#include "PERSON.cpp"

using namespace std;

int main(){
	
	Person bob;
	Person tom("Tom", "M", "stupid");
	Person p3("Suzan", "F", "pretty");
	Person mypeople[10];
	
	
	cout << bob.getStats() << endl;
	cout << "	Age: " << bob.getAge() << endl;
	cout << tom.getStats() << endl;
	cout << "	Age: " << tom.getAge() << endl;
	cout << p3.getStats() << endl;
	cout << "	Age: " << p3.getAge() << endl;
	
	bob.setName("Bob");
	bob.setGender("Male");
	bob.setAge(1000);
	cout << "	Age: " << bob.getAge() << endl;
	bob.setRace("White");
	bob.setAlive(true);
	
	cout << bob.getStats() << endl;
	
	return 0;
}