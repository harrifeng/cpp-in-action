#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    double obj = 3.14, *pd = &obj;

    void *pv = &obj;
    pv = pd;
    /////////////////////////////////////////////////////////////////
    // 08.cc:10:14: error: 'void*' is not a pointer-to-object type //
    //  cout << *pv << endl;                                       //
    //           ^                                                 //
    /////////////////////////////////////////////////////////////////
    cout << *pv << endl;
    return 0;
}
