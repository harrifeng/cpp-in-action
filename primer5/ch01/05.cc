#include <iostream>

int main() {
    int sum = 0, value = 0;

    while(std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 3 4 5 6                                        //
// Sum is: 18                                     //
////////////////////////////////////////////////////
