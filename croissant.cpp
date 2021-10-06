// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Oct 2021
// This program is the croissant store

#include <iostream>
#include <string>
#include <iomanip>

int main() {
    // This program calculates the total cost of the croissants
    const float CROISSANT_PRICE = 2.55;
    const float HST = 1.13;  // it's 113% to directly calculate the final cost
    float total = 0;
    int numberOfCroissants;
    std::string numberOfCroissantsString;

    std::cout << "Croissants are $" << CROISSANT_PRICE << " each."
    << std::endl;

    // input
    std::cout << "How many croissants would you like?: ";
    std::cin >> numberOfCroissantsString;

    // process & output
    try {
        numberOfCroissants = std::stoi(numberOfCroissantsString);
        if (numberOfCroissants == std::stof(numberOfCroissantsString)) {
            if (numberOfCroissants >= 6) {
                total = numberOfCroissants * CROISSANT_PRICE;
                /* https://stackoverflow.com/questions/15327706/
                c-currency-output/15337053#15337053 */
                std::cout << "The total cost will be $" << std::fixed
                << std::setprecision(2) << std::setfill('0')
                << total << " (no HST)" << std::endl;
            } else {
                total = (numberOfCroissants * CROISSANT_PRICE) * HST;
                std::cout << "The total cost will be $" << std::fixed
                << std::setprecision(2) << std::setfill('0')
                << total << " (with HST)" << std::endl;
            }
        } else {
            std::cout << "Invalid Input." << std::endl;
        }
    } catch (...) {
        std::cout << "Invalid Input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
