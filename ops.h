
#ifndef OPS_H
#define OPS_H

#include <iostream>

using namespace std;
class Array {
    private:
        int* arr;  // pointer to the array
        int length; // length of the array

    public:
        Array(int* data, int size);
        int* getArray();
        int getLength();
        Array& operator=(int val);
        friend std::ostream& operator<<(std::ostream& os, const Array& a);
};

#endif
