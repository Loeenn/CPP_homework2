#include <iostream>
int main() {
    setlocale(LC_ALL, "RUSSIAN");
    float a;
    float b;
    float c;
    float volume;
    float square;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    volume = a * b * c;
    square = 2 * (a * b + b * c + a * c);
    std::cout << "Объём параллелепипеда:" << volume << std::endl;
    std::cout << "Площадь поверхности параллелепипеда:" << square << std::endl;
}