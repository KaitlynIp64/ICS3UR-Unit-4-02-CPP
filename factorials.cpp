// Copyright (c) 2022 Kaitlyn Ip All rights reserved.
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program uses a while loop

#include <iomanip>
#include <iostream>
#include <string>

int main() {
    // this function uses a while loop
    std::string integerAsString;
    int intInteger;
    int loopCounter;
    loopCounter = 1;
    int factorial;
    factorial = 1;

    // input
    std::cout << "Enter an integer: ";
    std::cin >> integerAsString;

    // process & output
    try {
        int intInteger = std::stoi(integerAsString);

        while (loopCounter <= intInteger) {
            factorial = factorial * loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout << "The factorial of "
        << intInteger << " is " << factorial << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid input.";
    }
    std::cout << "\nDone." << std::endl;
}
