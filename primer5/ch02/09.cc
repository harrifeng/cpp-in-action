#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int ival = 1024;
    int *pi = &ival;        // pi points to an int
    int **ppi = &pi;        // ppi points to a pointer to an int

    cout << "The value of ival\n"
         << "direct value:   " << ival << "\n"
         << "indirect value: " << *pi  << "\n"
         << "doubly indirect value: " << **ppi
         << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// The value of ival                              //
// direct value:   1024                           //
// indirect value: 1024                           //
// doubly indirect value: 1024                    //
////////////////////////////////////////////////////
