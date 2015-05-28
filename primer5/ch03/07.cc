#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string str("some s");
    for (auto c: str) {
        cout << c << endl;
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// s                                              //
// o                                              //
// m                                              //
// e                                              //
//                                                //
// s                                              //
////////////////////////////////////////////////////
