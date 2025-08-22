#include <iostream>

class Sample {
public:
    static const int CONSTANT = 42; // OOP constant

    void printConstant() const {
        std::cout << "Constant value: " << CONSTANT << std::endl;
    }
};

int main() {
    Sample obj;
    obj.printConstant();
    int x = 10 ;
    const int  *ptr = &x; // Pointer to const int
    x++; // Increment x
    std::cout << "Value of x after increment: " << x << std::endl;
    return 0;
}