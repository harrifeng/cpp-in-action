#include <iostream>

int reused = 42;      // resued has global scope
int main() {
    int unique = 0;   // unique has block scope
    std::cout << "use global reused " << reused << " unique is " << unique << std::endl;

    int reused = 0;   // new, local object named reused hides global reused
    std::cout << "use local reused  " << reused << " unique is " << unique << std::endl;

    std::cout << "explicityly request global reused " << ::reused << " unique is " << unique << std::endl;

    return 0;
}

//////////////////////////////////////////////////////
// <===================OUTPUT===================>   //
// use global reused 42 unique is 0                 //
// use local reused  0 unique is 0                  //
// explicityly request global reused 42 unique is 0 //
//////////////////////////////////////////////////////
