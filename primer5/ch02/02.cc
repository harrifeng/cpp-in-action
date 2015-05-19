#include <iostream>

int main(int argc, char *argv[])
{
    long double ld = 3.14159;
    int c(ld), d = ld;

    std::cout << c << std::endl;
    std::cout << d << std::endl;

    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// $ g++ -std=c++11 02.cc                         //
// $ ./a.out                                      //
// 3                                              //
// 3                                              //
////////////////////////////////////////////////////
