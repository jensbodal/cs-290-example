#include <iostream>

int recFactorial(const int number) {
    if (number <= 1) {
        return number;
    }
    return number * recFactorial(number - 1);
}

int main() {
    int number = 5;
    std::cout << "Factorial of " << number << " is: " << recFactorial(number);
    std::cout << '\n';
    return 0;
}


