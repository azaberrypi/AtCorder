#include <iostream>

int main(void) {
    char c;
    std::cin >> c;
    if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
        std::cout << "vowel" << std::endl;
    } else {
        std::cout << "consonant" << std::endl;
    }

    return 0;
}