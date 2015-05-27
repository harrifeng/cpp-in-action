#include <iostream>

using namespace std;
//constexpr function
constexpr int size() {
    return 15;
}

int main(int argc, char *argv[])
{
    constexpr int mf = 50;
    // constexpr
    constexpr int sz = size();

    cout << mf << endl;
    cout << sz << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 50                                             //
// 15                                             //
////////////////////////////////////////////////////
