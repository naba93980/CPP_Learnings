#include <iostream>
class A
{
    int x;
    int y;

public:
    A()
    {
        std::cout << "called\n";
    }
    // A(int a, int b) : x(a), y(b) //x is set first with a then y with b.
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    // A(int a, int b) : x(a), y(b+a) //x is set first with a then y with 'b+a' , a and b both are passed value.
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    // A(int a, int b) : y(b), x(a) //x is set first then y
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    // A(int a, int b) : x(a), y(5*b) //x is set first then y argument is calculated and then set
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    // A(int a, int b) : y(b), x(a+b) //this one works bcoz a and b are passed values. x is set first with 'a+b' then y with 'b' , a and b both are passed value.
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    // A(int a, int b) : x(a), y(b+x) //this works bcoz x is set first and b is passed value
    // {
    //     std::cout << x << std::endl;
    //     std::cout << y << std::endl;
    //     std::cout << "called arg cons\n";
    //     show();
    // }
    A(int a, int b) : y(b), x(a + y) //doesnot work bcoz at declaration above 'x' is before 'y' so compiler will initialize 'x' first then 'y'....since 'y' is not set first so 'a+y' can give any garbage value.
    {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << "called arg cons\n";
        show();
    }
    void show()
    {
        std::cout << x << std::endl;
        std::cout << y << std::endl;
    }
};
int main()
{
    A obj(5022, 7056);
    std::cout << '\n';
    return 0;
}