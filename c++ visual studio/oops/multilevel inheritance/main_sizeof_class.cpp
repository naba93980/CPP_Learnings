#include <iostream>
class A
{
    int h;

public:
    int x;
};
class B : public A
{
public:
    int y = 10;
};

int main()
{
    B ak;
    std::cout << ak.y << std::endl;
    std::cout << sizeof(B) << std::endl;
    std::cout << sizeof(A);
    std::cout << '\n';
    return 0;
}