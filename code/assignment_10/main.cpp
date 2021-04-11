#include <iostream>
#include <fstream>

/**
 * Mark Chouinard Lab Assignment 10
 *
 * Programming Exercise #3 Sum of Numbers
Assume that a file containing a series of integers is named numbers.dat and exists on the
computer’s disk. Design a program that reads all of the numbers stored in the file and calculates their
total.

 numbers.dat
1
2
3
4
5
6

 Total: 21
 */

/**
 *  Sum all numbers from number.dat file
 *
 * @return
 */
int main() {

    std::ifstream numbers("/Users/mark/Documents/Classes/2021/CISP301/homework/code/assignment_10/numbers.dat");
    if (numbers.fail()) {
        std::cout << "Failed to open file";

        return 0;
    }
    int val = 0, sum = 0;
    while (numbers >> val) {
        sum += val;
    }
    numbers.close();

    std::cout << "Total: " << sum << std::endl;

    return 0;
}
