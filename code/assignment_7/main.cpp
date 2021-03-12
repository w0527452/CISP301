#include <iostream>
#include <iomanip>

/**
 * Payroll Program with Input Validation
 * Design a payroll program that prompts the user to enter an employee’s hourly pay rate and the
number of hours worked. Validate the user’s input so that only pay rates in the range of $7.50 through
$18.25 and hours in the range of 0 through 40 are accepted. The program should display the
employee’s gross pay.

 Output
 ================
Enter pay rate: dfgh
Rate must be an integer or decimal
Enter pay rate: 5
Rate must be between 7.50 & 18.25
Enter pay rate: 17.58
Enter number of hours: 45
Hours must be between 0 & 40
Enter number of hours: srhj
Rate must be an integer or decimal
Enter number of hours: 29.4

29.40 hours at $17.58 per hour is $516.85

 Crazy decimal example
 ==================
Enter pay rate: 15.658
Enter number of hours: 35.1284

35.13 hours at $15.66 per hour is $550.04
 */


/**
 * Validate hours are within range
 *
 * @param hours
 * @return
 */
bool hoursValid(float hours) {
    bool valid = true;
    if (hours < 0 || hours > 40) {
        valid = false;
    }
    return valid;
}

/**
 * Validate rate is within range
 *
 * @param rate
 * @return
 */
bool rateValid(float rate) {
    bool valid = true;
    if (rate < 7.5 || rate > 18.25) {
        valid = false;
    }
    return valid;
}

/**
 * Get user input
 *
 * @see https://stackoverflow.com/a/3274025
 * @param numType String to indicate what the input is for
 * @return
 */
float getInput(std::string numType) {
    float rate;

    std::cout << "Enter " << numType << ": ";

    while (true) {
        if (std::cin >> rate) {
            break;
        } else {
            std::cout << "Rate must be a whole number or decimal" << std::endl;
            std::cout << "Enter " << numType << ": ";
            std::cin.clear();
            while (std::cin.get() != '\n');
        }
    }

    return rate;

}


int main() {
    // Declare rate & hours as floats
    float rate, hours;
    // Get user to input rate
    rate = getInput("pay rate");
    while (!rateValid(rate)) {
        std::cout << "Rate must be between 7.50 & 18.25" << std::endl;
        rate = getInput("pay rate");
    }
    hours = getInput("number of hours");
    while (!hoursValid(hours)) {
        std::cout << "Hours must be between 0 & 40" << std::endl;
        hours = getInput("number of hours");
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n" << hours << " hours at $" << rate << " per hour is $" << hours * rate << std::endl;

    return 0;
}
