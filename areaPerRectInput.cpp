// Copyright 2025 Xiaohan All rights reserved.
// Created by Xiaohan
// Created on Feb 22 2025
// This program calculates the area and perimeter of a rectangle.

#include<iostream>

int main() {
    int length;
    std::cout << "Enter the length of the rectangle (cm):" << std::endl;
    std::cin >> length;

    int width;
    std::cout << "Enter the width of the rectangle (cm):" << std::endl;
    std::cin >> width;

    int area = length * width;
    int perimeter = 2 * (width + length);

    std::cout << "The area is: " << area << " cm^2" << std::endl;
    std::cout << "The perimeter is: " << perimeter << " cm" << std::endl;
}
