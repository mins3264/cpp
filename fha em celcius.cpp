#include <iostream>

int main() {
    float fharenheit, celsius;
    std::cout << "qual a temperatura em celsius?";
    std::cin >> celsius;
    fharenheit = (celsius * 9 / 5) + 32;
    std::cout << "a temperatura em fharenheit é:" << fharenheit;
  return 0;
}
