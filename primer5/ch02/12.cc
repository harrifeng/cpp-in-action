#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    extern const int bufSize;
    cout << bufSize << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// $ g++ -o a.out 11.cc 12.cc                     //
// $ ./a.out                                      //
// 1001                                           //
////////////////////////////////////////////////////
