// Created by: Hiab G
// Date: Wed, march. 28th
// This program checks if a year is a leap year

#include <iostream>
#include <string>

int main() {
    try {
        std::string year_as_string;
        int year;

        // Get year input
        std::cout << "Enter year: ";
        std::cin >> year_as_string;
        year = std::stoi(year_as_string);

        // check if the year is a leap year
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << "THIS IS A LEAP YEAR!" << std::endl;
                } else {
                    std::cout << "THIS IS NOT A LEAP YEAR." << std::endl;
                }
            } else {
                std::cout << "THIS IS A LEAP YEAR!" << std::endl;
            }
        } else {
            std::cout << "THIS IS NOT A LEAP YEAR." << std::endl;
        }
    } 
    catch (std::invalid_argument&) {
        std::cout << "Invalid input. Please enter a valid year." << std::endl;
    }

    return 0;
}