#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    cout << "r1 is " << r1 << " and r2 is " << r2 << endl;

    r1 = 0;
    cout << "r1 is " << r1 << " and r2 is " << r2 << endl;

    ///////////////////////////////////////////////////////////////
    // 14.cc:15:8: error: assignment of read-only reference 'r2' //
    //  r2 = 23;                                                 //
    //     ^                                                     //
    ///////////////////////////////////////////////////////////////
    // r2 = 23;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// r1 is 42 and r2 is 42                          //
// r1 is 0 and r2 is 0                            //
////////////////////////////////////////////////////
