
#include "ops.h"

Array::Array(int* data, int size) {
    arr = data;
    length = size;
}

int* Array::getArray() {
    return arr;
}

int Array::getLength() {
    return length;
}

Array& Array::operator=(int val) {
    for (int i = 0; i < length; i++) {
        arr[i] = val;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Array& a) {
    for (int i = 0; i < a.length; i++) {
        os << a.arr[i] << " ";
    }
    return os;
}
