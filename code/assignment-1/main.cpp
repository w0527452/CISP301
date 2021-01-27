#include <iostream>
#include <regex>

/**
 * Check if string contains only numbers (1 and above)
 *
 * @param str
 * @return
 */
bool is_int(const std::string &str) { // check with regex (does not accept leading zeroes before first digit)

    // Number not starting with zero.
    // TODO: figure out max possible length of number
    static const std::regex check("^([1-9]\\d*)$");

    return std::regex_match(str, check);
}

int main() {
    // Variable declaration
    std::string len, wdth;
    int length, width, area, perimeter;

    // Ask user to input width
    std::cout << "Enter the width: ";
    // Assign input to wdth as string
    std::cin >> wdth;
    // Make sure it contains a positive number
    while (!is_int(wdth)) {
        std::cout << "Width must be a positive number not starting with zero" << std::endl;
        std::cin.clear();// from previously checking for int TODO: figure out if this is necessary.  Shouldn't be an error flag set since we're expecting a string.
        std::cin >> wdth;
    }
    // Assign int value of string to width since we know it only contains numbers
    width = std::stoi(wdth);

    std::cout << "Width: " << width << std::endl;

    // Ask user to input length
    std::cout << "Enter the length: ";
    std::cin >> len;
    // Make sure it's a positive number
    while (!is_int(len)) {
        std::cout << "Length must be a positive number not starting with zero" << std::endl;
        std::cin.clear();
        std::cin >> len;
    }
    // Assign int value of string to length
    length = std::stoi(len);

    std::cout << "Length: " << length << std::endl;

    // Calculate area
    area = length * width;
    // Calculate perimeter
    perimeter = 2 * (length + width);
    // Output area and perimeter, start with blank line for readability
    std::cout << std::endl << "The area is " << area << std::endl << "The perimeter is " << perimeter << std::endl;

    return 0;
}

