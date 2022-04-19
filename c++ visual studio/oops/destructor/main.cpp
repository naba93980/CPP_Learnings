#include <iostream>
class A
{
    static int count;

public:
    A()
    {
        count++;
        std::cout << "constructor called for" << count << std::endl;
    }
    ~A()
    {
        std::cout << "destructor called for" << count << std::endl;
        count--;
    }
};
int A::count = 0;

int main()
{
    std::cout << "entered in main function\n";
    A a;
    {
        std::cout << "inside outer loop\n";
        A b;
        {
            std::cout << "inside inner loop\n";
            A c;
            std::cout << "leaving inner loop\n";
        }
        std::cout << "leaving outer loop\n";
    }
    std::cout << "out of main function";
    std::cout << '\n';
    return 0;
}