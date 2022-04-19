#include <iostream>
using namespace std;
class Parent
{
public:
    void print()
    {
        cout << "Parent Class printing" << endl;
    }
};
class Child : public Parent
{
public:
    void print()
    {
        cout << "Child Class printing" << endl;
    }
};

int main()
{

    Parent parent_object; //Creating object for parent class

    Child child_object; //Creating object for child class

    parent_object.print(); // This will go to the parent member function

    child_object.print(); // This will however, go to child member function
                          // overrides the parent function as the object is of the child class //function overriding
    return 0;
}