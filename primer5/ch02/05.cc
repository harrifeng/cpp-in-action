#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int ival = 42;
    int *p = &ival;
    // * yields the object to which p points
    cout << *p << endl;

    // * yields the object; we assign a new value to ival throught p
    *p = 0;
    cout << *p << endl;
    cout << ival << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 42                                             //
// 0                                              //
// 0                                              //
////////////////////////////////////////////////////
