#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); ++i)
            a[i] = i * 10;

        std::cout << "Original array: ";
        for (unsigned int i = 0; i < a.size(); ++i)
            std::cout << a[i] << " ";
        std::cout << "\n";

        Array<int> b = a;
        b[0] = 42;

        std::cout << "Modified copy: ";
        for (unsigned int i = 0; i < b.size(); ++i)
            std::cout << b[i] << " ";
        std::cout << "\n";

        std::cout << "Original unchanged: ";
        for (unsigned int i = 0; i < a.size(); ++i)
            std::cout << a[i] << " ";
        std::cout << "\n";

        std::cout << "Testing out-of-bounds access...\n";
        std::cout << a[10] << "\n"; // Should throw

    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
