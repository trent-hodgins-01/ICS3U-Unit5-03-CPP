// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/14/2021
// This is the Mark program
// The user enters in a mark level
// The program displays the level as a percentage

#include <iostream>

int CalculatePercentage(std::string level) {
    // calculate percentage
    int percentage;

    if (level == "4+") {
        percentage = 97;
    } else if (level == "4") {
        percentage = 90;
    } else if (level == "4-") {
        percentage = 83;
    } else if (level == "3+") {
        percentage = 78;
    } else if (level == "3") {
        percentage = 75;
    } else if (level == "3-") {
        percentage = 71;
    } else if (level == "2+") {
        percentage = 68;
    } else if (level == "2") {
        percentage = 65;
    } else if (level == "2-") {
        percentage = 61;
    } else if (level == "1+") {
        percentage = 58;
    } else if (level == "1") {
        percentage = 55;
    } else if (level == "1-") {
        percentage = 51;
    } else if (level == "R") {
        percentage = 0;
    } else {
        percentage = -1;
    }

    return percentage;
}

main() {
    // this function gets the level

    int calculatedPercentage;
    std::string level;

    // input
    std::cout << "Enter in grade mark(ex. 3-): ";
    std::cin >> level;
    std::cout << std::endl;

    // call functions
    calculatedPercentage = CalculatePercentage(level);

    // output
    std::cout << calculatedPercentage << "%" << std::endl;
}
