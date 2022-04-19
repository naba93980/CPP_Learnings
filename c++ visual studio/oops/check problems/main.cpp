#include <iostream>
class A
{
    int x;

public:
    A()
    {
        x = 10;
    }
    void getter()
    {
        std::cout << x << std::endl;
    }
    void setter(int a)
    {
        x = a;
    }
};
class B : public A
{
public:
    // void setter(int a) //overrides setter function inherited from class A and becomes a member function of class B, thus cannot access 'a' bcoz 'a' has been privately inherited from base class A
    // {
    //     // x = a;
    //     A::setter(a); //A::setter can acecss 'a' bcoz they belong to same class, which is the base class.
    // }
    // void getter()
    // {
    //     //std::cout << x << std::endl;
    //     A::getter();
    // }
};

int main()
{
    B obj;          //When obj was formed, object for class A was also formed which led to calling of constructor A. Then the created object of class A was inherited to create entire object obj.
    obj.getter();   //calls inherited getter
    obj.setter(50); //calls inherited setter
    obj.getter();
    obj.setter(500);
    obj.A::getter();
    std::cout << '\n';
    return 0;
}