#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    double dval = 3.14;
    ////////////////////////////////////////////////////////////////
    // We can initialize a reference to const from any expression //
    // that can be converted to the type of reference             //
    ////////////////////////////////////////////////////////////////
    const int &ri = dval;

    cout << "ri is " << ri << endl;
    dval = 4.15;
    cout << "ri is " << ri << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// ri is 3                                        //
////////////////////////////////////////////////////
