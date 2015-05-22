#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    int *p4 = NULL;

    int zero = 0;
    ///////////////////////////////////////////////////////////////////////////////
    // 07.cc:9:15: error: invalid conversion from 'int' to 'int*' [-fpermissive] //
    //  int *p5 = zero;                                                          //
    //            ^                                                              //
    ///////////////////////////////////////////////////////////////////////////////
    int *p5 = zero;
    return 0;
}
