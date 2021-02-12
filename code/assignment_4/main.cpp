#include <iostream>

/**
 * Calculate area given width and height
 *
 * @param width
 * @param height
 * @return
 */
float calculateArea(float width, float height) {
    float area = width * height;

    return area;
}

/**
 * Get width and height of rectangle and return area
 *
 * @return
 */
float getRectangle() {
    float width, height, area;

    std::cout << "Enter width: ";
    std::cin >> width;
    std::cout << "Enter height: ";
    std::cin >> height;
    area = calculateArea(width, height);
    return area;

}

/**
 * Compare area of 2 user-entered rectangles
 *
 * @return
 */
int main() {

    float r1, r2;
    std::string output;

    std::cout << "Enter rectangle 1" << std::endl;
    r1 = getRectangle();
    std::cout << std::endl << "Enter rectangle 2" << std::endl;
    r2 = getRectangle();

    if (r1 > r2) {
        output = "Rectangle 1 is larger.";
    } else if (r1 < r2) {
        output = "Rectangle 2 is larger.";
    } else {
        output = "They are the same size";
    }

    std::cout << std::endl << output << std::endl;

    return 0;
}
