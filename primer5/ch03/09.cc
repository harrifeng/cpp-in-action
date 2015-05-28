#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    string str("hello world");

    if (!str.empty()) {
        str[0] = toupper(str[0]);
    }

    cout << str << endl;

    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// Hello world                                    //
////////////////////////////////////////////////////
