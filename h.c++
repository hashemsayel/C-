#include <iostream>


const int SECRET = 42;

int main() {
 
    int num1 = 8;
    int num2 = 5;

    
    int newNum = (num1 * 2) + num2;

    newNum += SECRET;


    std::cout << "The updated value of newNum with SECRET is: " << newNum << std::endl;

    return 0;
}
