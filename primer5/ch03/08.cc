#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string str("hello world");
    for (auto &c: str) {
        // c is a reference, the assignment changes the char in s
        c = toupper(c);
    }
    cout << str << endl;

    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// HELLO WORLD                                    //
////////////////////////////////////////////////////
