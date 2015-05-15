#include <iostream>

int main() {
    int currVal = 0, val = 0;

    if (std::cin >> currVal) {
        int cnt = 1;
        while (std::cin >> val) {
            if (val == currVal){
                ++cnt;
            } else {
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val;
                cnt = 1;
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 42 42 42 42 42 55 55 62 100 100 100            //
// 42 occurs 5 times                              //
// 55 occurs 2 times                              //
// 62 occurs 1 times                              //
// 100 occurs 3 times                             //
////////////////////////////////////////////////////
