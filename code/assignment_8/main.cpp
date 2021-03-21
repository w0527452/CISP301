#include <iostream>
#include <sstream>
#include <iomanip>

/**
 * Rainfall Statistics
Design a program that lets the user enter the total rainfall for each of 12 months into an array. The
program should calculate and display the total rainfall for the year, the average monthly rainfall, and
the months with the highest and lowest amounts.

* TODO: add validation, error checking

 Sample run:
Enter rainfall for January: 5.2
Enter rainfall for February: 8
Enter rainfall for March: 15.5
Enter rainfall for April: 21.4
Enter rainfall for May: 5
Enter rainfall for June: 6.5
Enter rainfall for July: 4.2
Enter rainfall for August: 8
Enter rainfall for September: 7.3
Enter rainfall for October: 4
Enter rainfall for November: .78
Enter rainfall for December: 1.5

There was a total of 87.38 inches of rain ranging from a low of 0.78 in November to a high of 21.40 in April with an average of 7.28
 */

/**
 * Return month name for given month number
 * @param m
 * @return
 */
std::string getMonth(int m) {
    std::string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                              "October", "November", "December"};

    return months[m];
}

/**
 * Calculate total, min, max and average values from given array
 * (assuming array size of 12 based on exercise.  Otherwise it would require a size param)
 * @param rainfall
 * @return
 */
std::string getYearRange(double rainfall[]) {
    double min = rainfall[0],
            max = rainfall[0],
            total = 0,
            avg;
    std::string output,
            minMonth = getMonth(0),
            maxMonth = getMonth(0);

    for (int i = 0; i < 12; i++) {
        // add to total
        total += rainfall[i];

        // compare to min and max values
        if (rainfall[i] < min) {
            // set min amount
            min = rainfall[i];
            // set min  month name
            minMonth = getMonth(i);
        } else if (rainfall[i] > max) {
            // set max amount
            max = rainfall[i];
            // set max month name
            maxMonth = getMonth(i);
        }
    }
    // calculate average
    avg = total / 12;

    // Build string to return to main()
//    https://stackoverflow.com/a/10219267
    std::ostringstream oss;
    // make sure we only use 2 decimal places
    oss << std::fixed << std::setprecision(2);
    oss << "There was a total of " << total << " inches of rain ranging from a low of " << min << " in " << minMonth
        << " to a high of " << max << " in " << maxMonth << " with an average of " << avg;

    output = oss.str();

    return output;
}

/**
 * Display total, minimum, maximum and average rainfall from user input
 * @return
 */
int main() {

    double rainfall[12];
    std::string output;

    for (int i = 0; i < 12; i++) {
        std::cout << "Enter rainfall for " << getMonth(i) << ": ";
        std::cin >> rainfall[i];
    }

    output = getYearRange(rainfall);

    std::cout << "\n" << output;

    return 0;
}
