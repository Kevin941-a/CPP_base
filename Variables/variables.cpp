#include <iostream>

int main()
{

// Variable initialization
uint8_t intValue8 = 255;
uint16_t intValue16 = 65535;
uint32_t intValue32 = 4294967295;
uint64_t intValue64 = 18446744073709551615;

// Variable copy
uint16_t copieIntValue16 = intValue16;

// Reference variable
uint32_t& referenceIntValue32 = intValue32;

// Display initialization variable
std::cout << "Start initialization variable" << std::endl;

std::cout << "Variable 8 bit : " << unsigned(intValue8) << std::endl;
std::cout << "Variable 16 bit : " << unsigned(intValue16) << std::endl;
std::cout << "Variable 32 bit : " << unsigned(intValue32) << std::endl;
std::cout << "Variable 64 bit : " << intValue64 << std::endl;

std::cout << "End initialization variable" << std::endl;
std::cout << std::endl;

// Display copy variable
std::cout << "Start copy variable" << std::endl;

std::cout << "Variable copy intValue16 : " << copieIntValue16 << std::endl;

std::cout << "End copy variable" << std::endl;
std::cout << std::endl;

// Display reference variable
std::cout << "Start reference variable" << std:: endl;

intValue32 = 4112;
std::cout << "intValue32 modified" << std::endl;
std::cout << "Reference variable intValue32 : " << referenceIntValue32 << std::endl;

std::cout << "End reference variable" << std::endl;
std::cout << std::endl;

return 0;
}