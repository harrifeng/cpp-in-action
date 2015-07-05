#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int item1 = 0;
    int item2 = 0;

    while (cin >> item1 >> item2) {
        try {
            if (item1 != item2) {
                throw runtime_error("Data must refer to same ISBN");
            }

            cout << "The ISBNs are the same" << endl;
            break;
        } catch (runtime_error err) {
            cout << err.what()
                 << "\nTry Again? Entry y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n') {
                break;       // break ou of the while loop
            }
        }
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// $ ./a.out                                      //
// 111 222                                        //
// Data must refer to same ISBN                   //
// Try Again? Entry y or n                        //
// y                                              //
// 333 333                                        //
// The ISBNs are the same                         //
////////////////////////////////////////////////////
