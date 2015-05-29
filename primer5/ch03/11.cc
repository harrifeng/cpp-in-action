#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string s("some string");
    if (s.begin() != s.end()) {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// Some string                                    //
////////////////////////////////////////////////////
