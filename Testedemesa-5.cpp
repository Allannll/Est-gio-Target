#include <iostream>
#include <string>

int main() {
std::string inputString;
std::cout << "Digite o texto: ";
std::cin >> inputString;
std::string reversedString;

for (int i = inputString.length() - 1; i >= 0; --i) {
reversedString += inputString[i];
}

std::cout << "texto original: " << inputString << std::endl;
std::cout << "texto invertido: " << reversedString << std::endl;
return 0;
}