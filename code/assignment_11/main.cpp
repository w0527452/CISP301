#include <iostream>
#include <sstream>

/**
 * Mark Chouinard
 * Programming Exercise #3 Geometry Calculator
 *
 * @see https://stackoverflow.com/a/10219267 for sstream
 */


/**
 * Calculate area of a circle
 *
 * @return
 */
std::string circle() {
    const double PIE = 3.1415926535;
    double radius, area;
    std::cout << "Enter radius: " << std::endl;
    std::cin >> radius;
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Try using a number: ";
            std::cin >> radius;

        }
        if (!std::cin.fail()) {
            break;
        }
    }
    area = radius * radius * PIE;
    std::ostringstream areaString;
    areaString << "The area of a circle with radius " << radius << " is " << area << std::endl;

    return areaString.str();

}

/**
 * Calculate area of rectangle
 *
 * @return
 */
std::string rectangle() {
    double length, width;
    std::cout << "Enter Width: ";
    std::cin >> width;
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Try using a number: ";
            std::cin >> width;

        }
        if (!std::cin.fail()) {
            break;
        }
    }

    std::cout << "Enter Length: ";
    std::cin >> length;
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Try using a number: ";
            std::cin >> length;

        }
        if (!std::cin.fail()) {
            break;
        }
    }

    std::ostringstream rectString;
    rectString << "The area of a rectangle with width " << width << " and length " << length << " is " << length * width
               << std::endl;

    return rectString.str();

}

/**
 * Calculate area of a triangle
 *
 * @return
 */
std::string triangle() {
    double height, width;
    std::cout << "Enter Width: ";
    std::cin >> width;
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Try using a number: ";
            std::cin >> width;

        }
        if (!std::cin.fail()) {
            break;
        }
    }

    std::cout << "Enter Height: ";
    std::cin >> height;
    while (true) {
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Try using a number: ";
            std::cin >> height;

        }
        if (!std::cin.fail()) {
            break;
        }
    }

    std::ostringstream triangleString;
    triangleString << "The area of a triangle with width " << width << " and height " << height << " is "
                   << height * width / 2 << std::endl;

    return triangleString.str();
}

/**
 * Display menu allowing user to calculate area of different shaped objects
 *
 * @return
 */
int main() {
    std::string response;
    int areaSelect;

    do {
        std::cout << "\t\tGeometry Calculator" << std::endl;
        std::cout << "1. Area of a circle" << std::endl;
        std::cout << "2. Area of a rectangle" << std::endl;
        std::cout << "3. Area of a triangle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice (1-4)" << std::endl;
        std::cout << std::endl;

        std::cin >> areaSelect;
        while (true) {
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Try a number from the menu: ";
                std::cin >> areaSelect;

            }
            if (!std::cin.fail()) {
                break;
            }
        }
        switch (areaSelect) {
            case 1:
                response = circle();
                break;
            case 2:
                response = rectangle();
                break;
            case 3:
                response = triangle();
                break;
            case 4:
                response = "Goodbye";
                break;
            default:
                std::cout << "Try a number from the menu.";
        }

        std::cout << response << std::endl;

    } while (4 != areaSelect);

    return 0;
}
