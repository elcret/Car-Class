//lab week 6 main.cpp file
//Elizabeth Cret 2/18/2025

#include"Car.cpp"
#include<iostream>
using namespace std;
/*Demonstrate the class in main.cpp:
• create two Car objects
• call the accelerate function 5 times on one and 3 times on the other. After each call to the
accelerate function, get the current speed of the car and display it (indicating which car it is).
• call the brake function 3 times on one car and 2 times on the other. After each call to the brake function,
get the current speed of the car and display it*/

int main() {
	Car car1{ 2020, "Ford F150" };
	Car car2{ 2009, "Chevy Equinox" };

	//acc car 1, 5 times
	cout << "\nAccelerate Car 1 (5 times):\n";
	for (int i = 0; i < 5; i++) {
		car1.accelerate();
		cout << car1.getYearModel() << " " << car1.getMake() << " " << "speed: " << car1.getSpeed() << endl;
	}

	//acc car 2, 3 times
	cout << "\nAccelerate Car 2 (3 times):\n";
	for (int i = 0; i < 3; i++) {
		car2.accelerate();
		cout << car2.getYearModel() << " " << car2.getMake() << " " << "speed: " << car2.getSpeed() << endl;
	}

	//brake car 1, 3 times
	cout << "\nBrake Car 1 (3 times):\n";
	for (int i = 0; i < 3; i++) {
		car1.brake();
		cout << car1.getYearModel() << " " << car1.getMake() << " " << "speed: " << car1.getSpeed() << endl;
	}

	//brake car 2, 2 times
	cout << "\nBrake Car 2 (2 times):\n";
	for (int i = 0; i < 2; i++) {
		car2.brake();
		cout << car2.getYearModel() << " " << car2.getMake() << " " << "speed: " << car2.getSpeed() << endl;
	}

	return 0;
}
