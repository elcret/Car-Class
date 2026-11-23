//week 6 Car Class lab
//Elizabeth Cret 2/18/2025

/*Write a class named Car that has the following private member variables:
• yearModel . An int that holds the car’s year model.
• make . A string that holds the make of the car.
• speed . An int that holds the car’s current speed.*/

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
	int yearModel;
	string make;
	int speed;

	/*In addition, the class should have the following constructor and other member functions.
	• Constructor. The constructor should accept the car’s year model and make as arguments. These values
	should be assigned to the object’s yearModel and make member variables. The constructor should also
	assign 0 to the speed member variables.*/

public:
	Car(int year, string carMake) {
		yearModel = year;
		make = carMake;
		speed = 0;
	}

	/*• Accessor. Appropriate accessor functions to get the values stored in an object’s yearModel, make, and
	speed member variables.*/

	int getYearModel() {
		return yearModel;
	}

	string getMake() {
		return make;
	}

	int getSpeed() {
		return speed;
	}

	/*• accelerate. The accelerate function should add 5 to the speed member variable each time it is
	called.
	• brake. The brake function should subtract 5 from the speed member variable each time it is called*/

	void accelerate() {
		speed = speed + 5;
	}

	void brake() {
		speed = speed - 5;
	}
};