#include <iostream>

using namespace std;

// Mark Chouinard CISP 301 Chapter 14

/**
 * Sample Output:
 *
Instantiated a 1996 Toyota and its speed is 0
Toyota's speed increased to 5
Toyota's speed increased to 10
Toyota's speed increased to 15
Toyota's speed increased to 20
Toyota's speed increased to 25
Toyota's speed decreased to 20
Toyota's speed decreased to 15
Toyota's speed decreased to 10
Toyota's speed decreased to 5
Toyota's speed decreased to 0

Process finished with exit code 0
 */

/**
 * Car class
 */
class Car {

// Private properties
private:
    int yearModel, speed;
    string make;

// Public constructor and methods
public:
    /**
     * Constructor
     *
     * @param year Car's year
     * @param mk   Car's make
     */
    Car(int year, string mk) {
        yearModel = year;
        make = mk;
        speed = 0;

        // Output initial values
        cout << "Instantiated a " << yearModel << " " << make << " and its speed is " << speed << endl;
    }

    /**
     * Accelerate method to increase speed
     */
    void accelerate() {
        speed += 5;
    }

    /**
     * Brake method to decrease speed
     */
    void brake() {
        speed -= 5;
    }

    /**
     * Return current speed
     *
     * @return int speed
     */
    int getSpeed() {
        return speed;
    }

    /**
     * Return Car make
     *
     * @return str make
     */
    string getMake() {
        return make;
    }

    /**
     * Return Car year
     *
     * @return int yearModel
     */
    int getYear() {
        return yearModel;
    }

};

/**
 * Module to accelerate car x times
 *
 * @param car (reference)
 * @param x
 */
void speedUp(Car &car, int x) {
    // Accelerate car 5 times, output speed each time.
    for (int n = 0; n < x; n++) {
        car.accelerate();
        cout << car.getMake() << "'s speed increased to " << car.getSpeed() << endl;
    }
}

/**
 * Module to decelerate car x times
 *
 * @param car (reference)
 * @param x
 */
void decelerate(Car &car, int x) {
    // Brake car 5 times, output speed each time.
    for (int n = 0; n < 5; n++) {
        car.brake();
        cout << car.getMake() << "'s speed decreased to " << car.getSpeed() << endl;
    }
}


int main() {

    // Instantiate new Car
    Car toyota(1996, "Toyota");

    speedUp(toyota, 5);

    decelerate(toyota, 5);

    return 0;
}
