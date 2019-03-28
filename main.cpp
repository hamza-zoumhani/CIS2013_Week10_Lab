#include <iostream>
#include <string>
#include 'person.cpp'

using namespace std;

int main(){
	
	person bob;
	
	bob.setName("Bob");
	bob.setGender("Male");
	bob.setAge(22);
	bob.setRace("White");
	bob.setAlive(true);