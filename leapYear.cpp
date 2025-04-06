// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: April 6th, 2025
// This program asks the user for a year in integers and
// checks whether the year is a leap year or not.
#include <iostream>
#include <string>

int main() {
    std::string yearAsString;

    std::cout << "Please enter the year: ";
    std::cin >> yearAsString;

    try {
        int year = std::stoi(yearAsString);

        if (year <= 0) {
            std::cout << "Please enter a positive number" << std::endl;
        } else {
            if (year % 4 == 0) {
                if (year % 100 == 0) {
                    if (year % 400 == 0) {
                        std::cout << "This is a leap year." << std::endl;
                    } else {
                        std::cout << "This is not a leap year." << std::endl;
                    }
                } else {
                    std::cout << "This is a leap year." << std::endl;
                }
            } else {
                std::cout << "This is not a leap year." << std::endl;
            }
        }
        // fixed typo: "invalid_argument" ➜ "invalid_argument"
    } catch (std::invalid_argument&) {
        std::cout << "This is an invalid input." << std::endl;
    }

    std::cout << "Thank you for playing!" << std::endl;
    return 0;
}
