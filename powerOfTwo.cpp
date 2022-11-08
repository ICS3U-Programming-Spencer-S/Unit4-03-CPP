// Copyright (c) 2022 Spencer Scarlett All rights reserved.
// .
// Created by: Spencer Scarlett
// Created on: Nov 7, 2022
// A program which takes a user's input and
// lists the numbers from it to the power of 2

#include <cmath>
#include <iostream>

int main() {
    // Initialization of counter, product, and user input
    int loopCounter = 0;
    int powerTwo;
    int userInput;
    std::string userNumberStr;

    // User input
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumberStr;
    std::cout << std::endl;

    // Tries to get the user's number as an integer.
    try {
        userInput = std::stoi(userNumberStr);

        // Exception if the input is not a integer
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, ONLY enter a positive integer!.\n\n";
        return main();
    }

    // If statement in case of negative inputs.
    if (userInput < 0) {
        std::cout <<
        "Invalid input, enter a positive integer only!" << std::endl;
    } else {
        // Code ran until it's equal  with both the user input and counter.
        for (loopCounter = 0; loopCounter <= userInput; loopCounter++) {
            powerTwo = pow(loopCounter, 2);
            std::cout << loopCounter << "^2 = " << powerTwo << std::endl;
        }
    }
}
