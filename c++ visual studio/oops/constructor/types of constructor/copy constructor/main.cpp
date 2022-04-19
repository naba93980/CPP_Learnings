#include <iostream>
class A
{
    int x;

public:
    A() {}
    A(int a)
    {
        x = a;
    }
    A(const A &obj) //obj is rvalue and is considered as a temporary object by the compiler.
    {
        std::cout << "called\n";
        x = obj.x;
    }
    //if we dont specify a copy constructor compiler automatically makes a default copy constructor.
    void display()
    {
        std::cout << x << std::endl;
    }
};

int main()
{
    A a = A(50);
    a.display();
    A d = A(a);
    d.display();
    A b = A(500);
    b.display();
    A c = A(b);
    c.display();
    std::cout << "-----------\n";
    A e = A(a); //constructor called here.
    /*e = a; constructor not called here, bcoz object is already created and when it was 
    //created that time only default constructor was called; so what happens in this line is 
    //only assignment.*/
    e.display();
    std::cout
        << '\n';
    return 0;
}
