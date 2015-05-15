#include <iostream>

int main() {
    int sum = 0, val = 1;
    for (int val = 1; val <= 10; ++val) {
        sum += val;
        ++val;
    }

    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// Sum of 1 to 10 inclusive is 55                 //
////////////////////////////////////////////////////
