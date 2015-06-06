#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *pbeg = begin(arr);
    int *pend = end(arr);
    while (pbeg != pend && *pbeg >=0) {
        cout << *pbeg << " ";
        ++pbeg;
    }
    cout << endl;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// $ g++ --std=c++11 13.cc                        //
// $ ./a.out                                      //
// 0 1 2 3 4 5 6 7 8 9                            //
////////////////////////////////////////////////////
