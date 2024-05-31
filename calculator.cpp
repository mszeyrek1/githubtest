#include <iostream>

int modulo(int v, int w) {
    std::cout << "Enter number 1: ";
    std::cin >> v;
    std::cout << "Enter number 2: ";
    std::cin >> w;
    std::cout << "The result is: ";
    std::cout << v % w << std::endl;
    return 0;
}


int main () {
    int r,s;
    double num1, num2;
    char operation;

    std::cout << "Enter an operation(+,-,%,*,/): ";
    std::cin >> operation;

 if (operation != '%') {
    std::cout << "Enter a number: ";
    std::cin >> num1;

    std::cout << "Enter another number: ";
    std::cin >> num2;
    switch(operation) {
    case '+':
        std::cout << "The Result is: " << num1 + num2 << std::endl;
        break;
    case '-':
        std::cout << "The Result is: " << num1 - num2 << std::endl;
        break;
    case '*':
        std::cout << "The Result is: " << num1 * num2 << std::endl;
        break;
    case '/':
        if (num2 != 0){
                std::cout << "The Result is: " << num1 / num2 << std::endl;
        } else {
            std::cout << "You cannot divide with 0.";
        }
        break;
    default:
        std::cout << "Not valid" << std::endl;
    }
 } else {
    modulo(r,s);
 }
    return 0;
}