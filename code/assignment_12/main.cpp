#include <iostream>

/**
 * Most Frequent Character
Design a program that prompts the user to enter a string, and displays the character that appears
most frequently in the string.

 * Sample Run:
Enter a string: mark@chouinard.me
The character . appears 1 times;
The character @ appears 1 times;
The character a appears 2 times;
The character c appears 1 times;
The character d appears 1 times;
The character e appears 1 times;
The character h appears 1 times;
The character i appears 1 times;
The character k appears 1 times;
The character m appears 2 times;
The character n appears 1 times;
The character o appears 1 times;
The character r appears 2 times;
The character u appears 1 times;

Process finished with exit code 0
 */

/**
 * Find the number of times a letter appears in a string
 * I went this route due to multiple letters appearing the same number of times
 *
 * @param str
 */
void mostFrequent(std::string str) {
    // declare array of 255 to account for any character
    // use value 0 so we can increase it each time a letter is found
    unsigned int counts[255] = {0};

    for (int x = 0; x < str.length(); x++) {
//        std::cout << x << ": " << counts[x] << std::endl;
        // convert char to positive int for use as array key
        counts[(unsigned char) (str[x])]++;
    }

    // Loop through counts array and output count of each letter found
    for (int n = 0; n < 255; n++) {
        if (counts[n]) {
            // convert positive int to matching char
            char letter = (char) n;
            // Pull value from array to use as count of this letter - unsigned to match counts array
            unsigned int times = counts[n];
            // Output count of this letter
            std::cout << "The character " << letter << " appears " << times << " times;" << std::endl;
        }
    }

}


/**
 *
 * @return
 */
int main() {
    std::string userString;

    std::cout << "Enter a string: ";
    std::cin >> userString;

    mostFrequent(userString);

    return 0;
}
