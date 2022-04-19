#include <iostream>
class A
{
    int x;

public:
    int setval(int a)
    {
        x = a;
        return x;
    }
};
class B : public A
{
    int y;

public:
    // int setval(int a) //can override the inherited functions. In that case :: operator must be used to access the functions of base class
    // {
    //     std::cout << y;
    // }
    // int setval(int a) gets inherited from base class.
    void display(int a)
    {
        std::cout << setval(a); //used to access private member of base class.
    }
};
int main()
{
    class B obj;
    std::cout << obj.setval(6) << std::endl; //used to access private member of base class (which normally cant be accessed by derived class) as the entire object gets inherited.
    obj.display(5);
    std::cout << '\n';
    return 0;
}