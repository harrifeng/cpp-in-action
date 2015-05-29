#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string s("some string");
     for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
    }
    cout << s << endl;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// SOME string                                    //
////////////////////////////////////////////////////
