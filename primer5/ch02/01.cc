#include <iostream>

int main(int argc, char *argv[])
{
    long double ld = 3.14159;
    int a{ld};
    int b = {ld};
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
// <===================OUTPUT===================>                                                         //
// $ g++ -std=c++11 01.cc                                                                                 //
// 01.cc: In function 'int main(int, char**)':                                                            //
// 01.cc:6:13: warning: narrowing conversion of 'ld' from 'long double' to 'int' inside { } [-Wnarrowing] //
//      int a{ld};                                                                                        //
//              ^                                                                                         //
// 01.cc:7:16: warning: narrowing conversion of 'ld' from 'long double' to 'int' inside { } [-Wnarrowing] //
//      int b = {ld};                                                                                     //
//                 ^                                                                                      //
// $ ./a.out                                                                                              //
// 3                                                                                                      //
// 3                                                                                                      //
////////////////////////////////////////////////////////////////////////////////////////////////////////////
