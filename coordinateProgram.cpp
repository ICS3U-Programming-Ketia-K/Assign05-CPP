// Copyright (c) 2022 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Date: Jan 25, 2022
// This program asks the user for two points and displays the midpoint,
// distance and the equation of the line for the two points.

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

float midpointX(float x1, float x2) {
    // calculate the midpoint of the x-coordinates
    float midpointX = (x1 + x2) / 2.0;
    return midpointX;
}

float midpointY(float y1, float y2) {
    // calculate the midpoint of the y-coordinates
    float midpointY = (y1 + y2) / 2.0;
    return midpointY;
}

float distance(float x1, float y1, float x2, float y2) {
    // calculate the distance of two points
    float distance = sqrt((pow((x2-x1), 2)) + (pow((y2-y1), 2)));
    return distance;
}

float lineMValue(float x1, float y1, float x2, float y2) {
    // calculates the m-value for the line equation
    float mValue = ((y2-y1) / (x2-x1));
    return mValue;
}

float lineBValue(float x1, float y1, float m) {
    // calculates the b-value for the line equation
    float bValue = (y1 - (x1 * m));
    return bValue;
}

int main() {
    // declare local variables
    std::string userX1String, userY1String, userX2String;
    std::string userY2String;
    float userX1Float, userY1Float, userX2Float;
    float userY2Float, midpointAnswerX, midpointAnswerY, distanceAnswer;
    float lineAnswerM, lineAnswerB;

    // greet the user
    std::cout << "This program calculates the midpoint,distance and the"
          " equation of the line given two points!!\n ";
    std::cout << "\n";

    while (true) {
        // get the x-coordinate of the first point
        std::cout << "Enter the x-coordinate of the first point: ";
        std::cin >> userX1String;

        try {
            // check that it is a number
            userX1Float = std::stof(userX1String);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userX1String << " is not a valid input. Try again.\n";
        }
    }

    while (true) {
        // get the y-coordinate of the first point
        std::cout << "Enter the y-coordinate of the first point: ";
        std::cin >> userY1String;

        try {
            // check that it is a number
            userY1Float = std::stof(userY1String);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userY1String << " is not a valid input. Try again.\n";
        }
    }
    std::cout << "\n";

    while (true) {
        // get the x-coordinate of the second point
        std::cout << "Enter the x-coordinate of the second point: ";
        std::cin >> userX2String;

        try {
            // check that it is a number
            userX2Float = std::stof(userX2String);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userX2String << " is not a valid input. Try again.\n";
        }
    }

    while (true) {
        // get the y-coordinate of the second point
        std::cout << "Enter the y-coordinate of the second point: ";
        std::cin >> userY2String;

        try {
            // check that it is a number
            userY2Float = std::stof(userY2String);
            break;
        } catch (std::invalid_argument) {
            // error message if the input is not a number
            std::cout << userY2String << " is not a valid input. Try again.\n";
        }
    }
    std::cout << "\n";

    // call functions to calculate the midpoint, distance and line equation
    midpointAnswerX = midpointX(userX1Float, userX2Float);
    midpointAnswerY = midpointY(userY1Float, userY2Float);
    distanceAnswer = distance(userX1Float, userY1Float,
                              userX2Float, userY2Float);
    lineAnswerM = lineMValue(userX1Float, userY1Float,
                             userX2Float, userY2Float);
    lineAnswerB = lineBValue(userX1Float, userY1Float, lineAnswerM);

    // display the midpoint
    std::cout << "The midpoint of the two points is: (" << std::fixed <<
    std::setprecision(2) << std::setfill('0') << midpointAnswerX << ", " <<
    std::fixed << std::setprecision(2) << std::setfill('0') <<
    midpointAnswerY << ")\n";
    std::cout << "\n";

    // display the distance
    std::cout << "The distance between those two points is " << std::fixed <<
    std::setprecision(2) << std::setfill('0') << distanceAnswer << "\n";
    std::cout << "\n";

    // display the line equation
    std::cout << "The line equation of those two points is: y = " <<
    std::fixed << std::setprecision(2) << std::setfill('0') << lineAnswerM <<
    "x + " << std::fixed << std::setprecision(2) << std::setfill('0') <<
    lineAnswerB << "\n";
}
