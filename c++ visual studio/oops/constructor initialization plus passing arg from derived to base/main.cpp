#include <iostream>
class base
{
public:
    int x;
    base(int val1) : x(val1){};
};
class derived : public base
{
public:
    int y;
    int z;
    derived(int val1, int val2, int val3) : base(val1), y(val2), z(val3){};
};

int main()
{
    derived obj = derived(5, 10, 15);
    std::cout << obj.x << std::endl;
    std::cout << obj.y << std::endl;
    std::cout << obj.z << std::endl;
    std::cout << '\n';
    return 0;
}