//
// Created by Oghenemarho Orukele on 05/05/2024.
//
#include <iostream>
#include <limits>
#include "closest_number_to_zero.h"

using namespace std;

int closestNumberToZero(int numbers[], int size) {
    int closest = std::numeric_limits<int>::max();
    for (int i = 0; i < size; i++) {
        if (abs(closest) > abs(numbers[i])) {
            closest = numbers[i];
        } else if (abs(closest) == abs(numbers[i]) && closest < numbers[i]) {
            closest = numbers[i];
        }
    }

    return closest;
}

int sumOfTwoElementsClosestToZero(int numbers[], int size) {
    sort(numbers, numbers + 1);

    if (size < 2) {
        return 2 * numbers[0];
    }
    for (int i = 0; i < size; i++){
        cout << numbers[i] << endl;
    }

    return 0;
}