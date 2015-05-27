#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string word = "hello world";
    cout << word.empty() << endl;
    cout << word.size() << endl;

    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 0                                              //
// 11                                             //
////////////////////////////////////////////////////
