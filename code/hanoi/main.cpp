#include <iostream>

/**
 * Simulate Tower of Hanoi
 * @param n
 * @param startPeg
 * @param endPeg
 * @param tmpPeg
 */
void hanoi(int n, std::string startPeg, std::string endPeg, std::string tmpPeg) {
    static unsigned int count = 0;
    if (n > 0) {
        // Move first n-1 discs from start peg to temp peg using end peg as temp
        hanoi(n - 1, startPeg, tmpPeg, endPeg);
        std::cout << ++count << ". Move disc " << n << " from peg " << startPeg << " to peg " << endPeg << std::endl;
        // Move n-1 discs from tmp peg to end peg using start peg as temp
        hanoi(n - 1, tmpPeg, endPeg, startPeg);
    }

}

int main() {
    int n = 8; // number of discs
    hanoi(n, "1", "3", "2");

    return 0;
}
