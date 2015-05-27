#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string s1 = "hello", s2 = "world\n";
    string s3 = s1 + s2;
    cout << s3;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// helloworld                                     //
////////////////////////////////////////////////////
