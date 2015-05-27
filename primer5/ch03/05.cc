#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    int n = -5;
    string word = "hello world";
    cout << word.size() << endl;
    cout << (word.size() > n ? "size is bigger than -5 !": "size is small than -5!")
         << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 11                                             //
// size is small than -5!                         //
////////////////////////////////////////////////////
