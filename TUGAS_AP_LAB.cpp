#include <iostream>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                return true;
            else
                return false;
        } else
            return true;
    } else
        return false;
}

// Function to print the result for a given year
void printYearInfo(int year) {
    if (isLeapYear(year)) {
        std::cout << year << " kabisat" << std::endl;
    } else {
        std::cout << year << " bukan kabisat" << std::endl;
    }
}

int main() {
    int A, B;
    std::cout << "Masukkan tahun (A) dan interval (B): ";
    std::cin >> A >> B;

    // Determine the range based on the interval
    if (B > 0) {
        for (int i = 0; i <= B; ++i) {
            printYearInfo(A + i);
        }
    } else {
        for (int i = 0; i >= B; --i) {
            printYearInfo(A + i);
        }
    }

    return 0;
}
