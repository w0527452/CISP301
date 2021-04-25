#include <iostream>

/**
 * Simulate Tower of Hanoi
 * @param n
 * @param startPeg
 * @param endPeg
 * @param tmpPeg
 */
void hanoi(int n, std::string startPeg, std::string endPeg, std::string tmpPeg) {
    if (1 == n) {
        std::cout << "Move disc 1 from peg " << startPeg << " to peg " << endPeg << std::endl;
        return;
    }
    hanoi(n - 1, startPeg, tmpPeg, endPeg);
    std::cout << "Move disc " << n << " from peg " << startPeg << " to peg " << endPeg << std::endl;
    hanoi(n - 1, tmpPeg, endPeg, startPeg);
}

int main() {
    int n = 4; // number of discs
    hanoi(n, "1", "3", "2");

    return 0;
}
