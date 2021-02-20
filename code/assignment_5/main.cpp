#include <iostream>

/**
At one college, the tuition for a full-time student is $6,000 per semester. It has been announced that
the tuition will increase by 2 percent each year for the next five years. Design a program with a loop
that displays the projected semester tuition amount for the next five years.
 */

int main() {

    // Declare constant float for tuition increase multiplier - 102%
    const float MULTIPLIER = 1.02;
    // Declare float for tuition, initialize to current value
    float tuition = 6000;

    // Output current tuition
    std::cout << "Current tuition: $" << tuition << std::endl;

    // Output increased tuition for next 5 years
    for (int x = 1; x < 6; x++) {
        tuition *= MULTIPLIER;
        std::cout << "Year " << x + 1 << " tuition: $" << tuition << std::endl;
    }

    return 0;
}
