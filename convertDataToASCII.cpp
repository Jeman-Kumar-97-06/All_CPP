#include <iostream>

int main(){
    char ch;
    std::cout << "Enter a single character :" << std::endl;
    std::cin  >> ch;

    int asciiValue = (int)ch;

    std::cout << "The ASCII value of '" << ch << "' is " << asciiValue << std::endl;
    return 0;
}