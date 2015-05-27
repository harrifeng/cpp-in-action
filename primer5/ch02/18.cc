#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char commonC = 'A';
    typedef char *pstring;
    const pstring cstr = &commonC; // cstr is a constnt pointer to char!!
    cout << *cstr << endl;

    const char constC = 'B';
    // NOT equal with previous one
    const char* cstr2 = &constC;  // cstr2 is a pointer to const char
    cout << *cstr2 << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// A                                              //
// B                                              //
////////////////////////////////////////////////////
