#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string word;
    while (cin >> word) {
        cout << word << endl;
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// > ./a.out                                      //
// 123 456 789                                    //
// 123                                            //
// 456                                            //
// 789                                            //
////////////////////////////////////////////////////
