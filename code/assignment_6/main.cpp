#include <iostream>

/**
Test Average and Grade
Write a program that asks the user to enter five test scores. The program should display a letter grade
for each score and the average test score. Design the following functions in the program:
calcAverage—This function should accept five test scores as arguments and return the average
of the scores.
determineGrade—This function should accept a test score as an argument and return a letter
grade for the score (as a String), based on the following grading scale:
 */

/**  Output

Enter Grade 1 80.5
Enter Grade 2 80.5
Enter Grade 3 80.25
Enter Grade 4 80
Enter Grade 5 78

Score 1 of 80.5 is B
Score 2 of 80.5 is B
Score 3 of 80.25 is B
Score 4 of 80 is B
Score 5 of 78 is C

Average: 79.85
Grade: C

Process finished with exit code 0
 */


/**
 * Determine grade letter based on given average
 *
 * Used switch with case ranges instead of if-then-else
 * Average must be an int here due to switch statement.
 *
 * @see https://stackoverflow.com/a/23924591
 * @param grade
 * @return
 */
std::string determineGrade(int grade) {
    std::string gradeLetter;
    switch (grade) {
        case 90 ... 100:
            gradeLetter = "A";
            break;
        case 80 ... 89:
            gradeLetter = "B";
            break;
        case 70 ... 79:
            gradeLetter = "C";
            break;
        case 60 ... 69:
            gradeLetter = "D";
            break;
        default:
            gradeLetter = "F";

    };

    return gradeLetter;

};

/**
 * Calculate average of an array of grades
 *
 * @param grades  array of grades to use for avg
 * @param size    size of grades array
 * @return
 */
double calcAverage(double grades[], int size) {
    // counter
    int n;
    // declaration of doubles
    double average, sum = 0;

    // Increment sum by each grade
    for (n = 0; n < size; n++) {
        std::cout << std::endl << "Score " << n + 1 << " of " << grades[n] << " is " << determineGrade((int) grades[n]);
        sum += grades[n];
    }
    // Divide by size to get average
    average = sum / size;

    return average;
}

// Because the book says "This function should accept five test scores as arguments"...
// Could have called this function using each grade from the array as individual params
double getAverage(double one, double two, double three, double four, double five) {
    double sum = one + two + three + four + five;
    double average = sum / 5;
    std::cout << one << " is " << determineGrade((int) one) << std::endl;
    std::cout << two << " is " << determineGrade((int) two) << std::endl;
    std::cout << three << " is " << determineGrade((int) three) << std::endl;
    std::cout << four << " is " << determineGrade((int) four) << std::endl;
    std::cout << five << " is " << determineGrade((int) five) << std::endl;
    return average;
}

int main() {

    // Number of grades to input
    int size = 5;

    // Declare array of doubles to hold grades, avg.
    double grades[size], avg;
    // Declare string `grade` to hold letter grade.
    std::string grade;

    // Get user to input [size] grades
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter Grade " << (i + 1) << " ";
        std::cin >> grades[i];

    }

    // Call calcAverage() with grades array and size
    avg = calcAverage(grades, size);
    std::cout << "\n\nAverage: " << avg << std::endl;

    // Call determineGrade() with avg to get letter grade
    // avg needs to be converted to int for use in determineGrade()
    grade = determineGrade((int) avg);
    std::cout << "Grade: " << grade << std::endl;


    return 0;
}
