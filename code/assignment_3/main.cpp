#include <iostream>
#include <set>
#include <map>

/**
 * Get user to input value for bill(name)
 * @param name
 * @param val
 * @return
 */
float getInput(std::string name, float val) {

    std::cout << std::endl << "Enter your monthly cost for " << name << ": ";
    std::cin >> val;

    return val;
}

/**
 * Get annual cost based on monthly bill total
 * @param monthly
 * @return
 */
float getAnnualCost(float monthly) {
    return monthly * 12;
}

int main() {

//    float payment, insurance, gas, oil, tires, maintenance, total;
//    std::string items[] = {"payment", "insurance", "gas", "oil", "tires", "maintenance"};
//    std::set<std::string> items = {"payment", "insurance", "gas", "oil", "tires", "maintenance"};

    float total = 0;

    // C++ version of PHP associative array
    std::map<std::string, float> bills{
            {"loan payment", 0},
            {"insurance",    0},
            {"gas",          0},
            {"oil",          0},
            {"tires",        0},
            {"maintenance",  0}
    };

    // Loop through each map pair
    for (auto const &bill : bills) {
        // increment total by user input for each bill
        total += getInput(bill.first, bill.second);
    }

    // Set up for decimal output
    std::cout.setf(std::ios::fixed);
    std::cout.setf(std::ios::showpoint);
    std::cout.precision(2);

    // Display monthly total
    std::cout << std::endl << "Total Monthly Expenses: " << total << std::endl;
    // Display annual total
    std::cout << "Total Annual Expenses: " << getAnnualCost(total) << std::endl;

    return 0;
}


