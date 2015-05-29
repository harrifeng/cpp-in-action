#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : v) {
        i *= i;
    }
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 1 4 9 16 25 36 49 64 81                        //
////////////////////////////////////////////////////
