#include <iostream>

int count_calls() {
    static int count;
    return ++count;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 3; i++) {
        std::cout << count_calls() << std::endl;
    }
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// 1                                              //
// 2                                              //
// 3                                              //
////////////////////////////////////////////////////
