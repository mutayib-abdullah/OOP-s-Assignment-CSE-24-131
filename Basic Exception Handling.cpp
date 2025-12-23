// ex15_7.cpp
#include <iostream>
using namespace std;

int main()
{
    try {
        throw 10;
    }
    catch(int e) {
        cout << "Exception caught: " << e;
    }
    return 0;
}

