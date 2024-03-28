#include <iostream>

// Function that takes an integer reference and modifies it
void modifyByReference(int &refVar) {
    refVar += 10; // Add 10 to the referenced variable
}

int main() {
    int originalVar = 5;
    std::cout << "Original value: " << originalVar << std::endl;

    // Call the function with the original variable as an argument
    modifyByReference(originalVar);

    // The value of originalVar is changed because it was passed by reference
    std::cout << "Value after modification by reference: " << originalVar << std::endl;

    return 0;
}