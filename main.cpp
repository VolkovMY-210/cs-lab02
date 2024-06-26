#include <iostream>
#include <algorithm>

int main() {
    std::cout << "Enter A and B: ";
    double a, b;
    std::cin >> a >> b;
    
    std::cout << "A + B = " << a + b << '\n'
              << "A - B = " << a - b << '\n'
              << "A * B = " << a * b << '\n'
              << "A / B = " << a / b << '\n'
              << "max(A B) = " << std::max(a, b) << '\n';
    std::cout 
              << "Min (A B) = " << std::min(a, b) << '\n';
    return 0;
}
