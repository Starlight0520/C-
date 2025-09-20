#include <iostream>

int main() {
    int questionInput;
    bool question;

    std::cout << "Thank you for listening" << std::endl;
  
    std::cin >> questionInput;  // Read as int to ensure correct input

    question = (questionInput == 1); // Convert to bool

    if (question) {
        std::cout << "Raise hand; Ask question." << std::endl;
    } else {
        std::cout << "Prepare for Module Exercise." << std::endl;
    }

    return 0;
}
