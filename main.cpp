#include <iostream>


bool my_bool = false;

int test_function(int i) {
    std::cout << i << std::endl;
    return 0;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    for (int i =0; i<5; i++){
        test_function(i);
        // This is a comment
        my_bool = !my_bool;
    }
    std::cout << my_bool;
    return 0;
}
