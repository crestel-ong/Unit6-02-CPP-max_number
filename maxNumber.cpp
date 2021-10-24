// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: October 2021
// this is the max number program in python
// finds the largest number out of 10 randomly generated numbers and prints it
// this program uses arrays as parameter

#include <iostream>
#include <random>
#include <array>

// declare the array as a parameter in a function (2 first lines of code)
template<size_t N>
int LargestNumber(std::array<int, N> randomNumberList) {
    // this function finds the biggest number in the list
    // aka finds the max number

    // declaring
    int maxNumber = randomNumberList[1];

    for (int loopCounter = 0; loopCounter < randomNumberList.size();
    loopCounter++) {
        if (randomNumberList[loopCounter] > maxNumber) {
            maxNumber = randomNumberList[loopCounter];
    }
}
    return maxNumber;
}

int main() {
    // this function uses a list
    // this function gets generates random number

    // declaring
    // pass an array into this function as a parameter
    std::array<int, 10> numberList;
    int randomSingleNumber;
    int biggestNumber;

    std::cout << "Here is a list of 10 randomly generated numbers : \n"
    << std::endl;

    // this gets the random numbers
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);

    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        randomSingleNumber = idist(rgen);  // putting the random gen # into var
        // putting this new random gen # into array
        numberList[loopCounter] = randomSingleNumber;
        std::cout << "Random number " << loopCounter + 1 << " is: "
        << numberList[loopCounter] << std::endl;
    }
    biggestNumber = LargestNumber(numberList);
    std::cout << "\nThe largest number is " << biggestNumber << "."
    << std::endl;

    std::cout << "\nDone." << std::endl;
}
