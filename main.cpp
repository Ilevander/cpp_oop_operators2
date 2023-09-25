#include <iostream>
#include "ops.h"

int main() {
    int my_data[] = {1, 2, 3};
    int my_size = 3;
    Array my_array(my_data, my_size);
    std::cout << my_array << std::endl;
    my_array = 0;
    std::cout << my_array << std::endl;
    return 0;
}
