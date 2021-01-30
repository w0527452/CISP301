#include <iostream>

/**
 * 5. Distance Traveled
    Assuming there are no accidents or delays, the distance that a car travels down the interstate can be
    calculated with the following formula: Distance = Speed × Time

    A car is traveling at a constant 60 miles per hour. Design a program that displays the following:

    The distance the car will travel in 5 hours
    The distance the car will travel in 8 hours
    The distance the car will travel in 12 hours

    http://www.cplusplus.com/doc/tutorial/arrays/
 * @return
 */

int main() {
    // Declare constant int for speed, initialize with value 60
    const int SPEED = 60;
    // Declare array of integers and initialize with mile values
    int hours[] = {5, 8, 12};
    // Declare int var dist for later use
    int dist;

    // Loop through array of mile values
//    for (int i = 0; i < 3; ++i) {
//        // Calculate distance for given mileage
//        dist = hours[i] * SPEED;
//        // Output travel time and distance
//        std::cout << "In " << hours[i] << " hours at " << SPEED << "mph, the car will travel " << dist << " hours"
//                  << std::endl;
//    }

    // Range-based loop
    for (int h : hours) {
        dist = h * SPEED;
//        std::cout << "In " << h << " hours at " << SPEED << " mph, the car will travel " << dist << " miles."
//                  << std::endl;
        printf("\nAfter %d hours at %d mph, the car would have travelled %d miles", h, SPEED, dist );
    }

    return 0;
}
