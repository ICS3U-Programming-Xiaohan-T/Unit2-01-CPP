// Copyright 2025 Xiaohan All rights reserved.
// Created by Xiaohan
// Created on Feb 22, 2025
// This program calculates the area and perimeter of a rectangle.

#include <iostream>

int main() {
    // Shows that the variable is an integer and declares it for the length.
    int length;
    // Telling users to input a length
    std::cout << "Enter the length of the rectangle (cm):" << std::endl;
    // Once the input is entered, store it to the related variable
    std::cin >> length;
    // For width, the process follows the same as for length.
    int width;
    std::cout << "Enter the width of the rectangle (cm):" << std::endl;
    std::cin >> width;
    // Formula to calculate the area and perimeter.
    int area = length * width;
    int perimeter = 2 * (width + length);
    // Out put the result for area and perimeter.
    std::cout << "The area is: " << area << " cm^2" << std::endl;
    std::cout << "The perimeter is: " << perimeter << " cm" << std::endl;
}
