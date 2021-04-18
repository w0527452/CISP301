#include <iostream>
#include <sstream>
#include <vector>

/**
 * Mark Chouinard CISP 301 - Chapter 12
 *
 * Most Frequent Character
Design a program that prompts the user to enter a string, and displays the character that appears
most frequently in the string.

 I went with listing the count of each character due to nearly every string I tested having characters
 that appeared the same number of times.

 * Sample Run using charCount():
Enter a string: https://chouinard.me
The character . appears 1 times;
The character / appears 2 times;
The character : appears 1 times;
The character a appears 1 times;
The character c appears 1 times;
The character d appears 1 times;
The character e appears 1 times;
The character h appears 2 times;
The character i appears 1 times;
The character m appears 1 times;
The character n appears 1 times;
The character o appears 1 times;
The character p appears 1 times;
The character r appears 1 times;
The character s appears 1 times;
The character t appears 2 times;
The character u appears 1 times;

Process finished with exit code 0
 */



/**
 * Find most used letter in string
 * @param str
 * @return
 *
 * Sample Output
 * =================
 * Enter a string: hello world
 * The character l was used 3 times
 *
 * Process finished with exit code 0
 * ==================
 * Enter a string: https://chouinard.me
 * The character / was used 2 times
 *
 * Process finished with exit code 0
 *
 */
std::string mostFrequent( std::string str ) {
    unsigned int counts[256] = {0};
    unsigned int maxCount = 0;
    unsigned char maxLetter;

    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    for (unsigned char x : str) {
//        std::cout << "x: " << x << std::endl;
        counts[x]++;
    }

    for (unsigned int n = 0; n <= 255; n++) {
        if (counts[n]) {
            unsigned int times = counts[n];
            if (times > maxCount ) {
                maxCount = times;
                maxLetter = (unsigned char) n;
            }
        }
    }

    std::ostringstream output;
    output << "The character " << maxLetter << " was used " << maxCount << " times\n";

    return output.str();

}

/**
 * Find the number of times a letter appears in a string
 * I went this route due to multiple letters appearing the same number of times.
 * I used unsigned since we know values will never be negative
 *
 * @param str
 */
std::string charCount(std::string str) {
    // declare array of size 256 to account for any ASCII character
    // use value 0 so we can increase it each time a letter is found
    unsigned int counts[256] = {0};

    // range based loop
    for (char & x : str) {
//        std::cout << x << ": " << counts[x] << std::endl;
        // cast as unsigned char to make sure value is 0-255 to cover extended ASCII codes
        // https://www.tutorialspoint.com/what-is-an-unsigned-char-in-cplusplus
        // http://www.asciitable.com/
        counts[(unsigned char) x]++;
    }

    std::ostringstream output;
    // Loop through counts array and output count of each letter found
    for (unsigned int n = 0; n <= 255; n++) {
        if (counts[n]) {
            // cast as unsigned char to make sure value is 0-255
            // see comment about this above.
            auto letter = (unsigned char) n;
            // Pull value from array to use as count of this letter
            unsigned int times = counts[n];
            // Output count of this letter

            output << "The character " << letter << " appears " << times << " times" << std::endl;


        }
    }

    return output.str();

}


/**
 *
 * @return
 */
int main() {
    std::string userString, countString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, userString);

//    countString = charCount(userString);
    countString = mostFrequent(userString);

    std::cout << countString;

    return 0;
}
