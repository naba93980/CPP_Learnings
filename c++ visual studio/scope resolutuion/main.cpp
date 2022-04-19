#include <iostream>
int x = 10;
namespace name1
{
    int x = 54;
}

int main()
{

    int x = 5;
    std::cout << ::x << "\n";
    std::cout << name1::x << "\n";
    std::cout << x << "\n";
    return 0;
}