#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int i = 11;
    const int *p1 = &i;
    //////////////////////////////////////////////////////////////////////////////////////
    // 16.cc:8:15: error: invalid conversion from 'const int*' to 'int*' [-fpermissive] //
    //  int *p2 = p1;                                                                   //
    //            ^                                                                     //
    //////////////////////////////////////////////////////////////////////////////////////
    // int *p2 = p1;
    return 0;
}
