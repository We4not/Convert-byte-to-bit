#include <iostream>
#include <conio.h>

int main()
{
    int byte;
    int bit;
    std::cout << "Byte: ";
    std::cin >> byte;
    bit = byte * 8;
    std::cout << "Result: " << bit << "\n";
    _getch();
    return 0;
}