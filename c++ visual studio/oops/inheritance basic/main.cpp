#include <iostream>
class A
{
public:    /////////////////////////////    |___|   |___|   |___|  |___|   |___|   |___|   |___|   |___|
    int l; /////////////////////////////                                   ____________objA_____________
    int x; /////////////////////////////    _________________________objB_______________________________
    A()
    {
        std::cout << "def cons of A called \n the value of  x & l " << x << " " << l << std::endl;
    }
    A(int g, int h)
    {
        x = g;
        l = h;
    }
    void get_data()
    {
        std::cout << "the value of  x & l " << x << " " << l << std::endl;
    }
};
class B : public A
{
    int y;

public:
    B(int j)
    {
        y = j;
        l = 88;
        x = 98;
        std::cout << "para cons of B called \n the value of  Y " << y << std::endl;
    }
    B() { std::cout << "def cons of B called \n the value of  Y " << y << std::endl; }
    void get_data_b()
    {
        std::cout << "the value of  x " << x << std::endl;
        std::cout << "the value of  y " << y << std::endl;
        std::cout << "the value of  l " << l << std::endl;
    }
};

int main()
{
    // A obja = A(78, 79);
    // obja.get_data();
    B objb = B(); //default constructor of B called, also since creation of object B means creation of object A, so constructor for class A is also called.
    objb = B(10); //parameterized constructor of B called, also since creation of object B means creation of object A, and since parameterised constructor of A cannot be called so default constructor for class A is also called.

    objb.get_data_b();

    std::cout << '\n';
    return 0;
}
