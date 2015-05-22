#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    int i = 42;
    int *p;          // p is a pointer to int
    ///////////////////////////////////////////////////////////
    // It can be easier to understand complicated pionter    //
    // or reference declarations if you read them from right //
    // to left                                               //
    ///////////////////////////////////////////////////////////
    int *&r = p;     // r is a reference to the pinter p

    r = &i;   // r refers to a pointer; assigning &i to r makes p pint to i;
    cout << "*p is now: " << *p << "\t i is now: " << i << endl;
    *r = 0;
    cout << "*p is now: " << *p << "\t i is now: " << i << endl;
    return 0;
}

///////////////////////////////////////////////////////
// <===================OUTPUT===================>    //
// *p is now: 42	 i is now: 42                    //
// *p is now: 0	 i is now: 0                         //
///////////////////////////////////////////////////////
