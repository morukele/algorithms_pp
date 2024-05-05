#include <iostream>
#include "algo/closest_number_to_zero.h"
#include "algo/change.h"

using namespace std;

int main() {
    Change change;
    long s = 9223372036854775807;

    bool found = createChange(change, s);

    cout << "Optimal Solution Found: " << found << endl;
    cout << "Coins 2: " << change.coin2 << endl;
    cout << "Bill 5: " << change.bill5 << endl;
    cout << "Bill 1O: " << change.bill10 << endl;

    int numbers[] = {-10, 10};
    int num = sumOfTwoElementsClosestToZero(numbers, 2);

    cout << "Number closest to zero is: " << num << endl;

    return 0;
}
