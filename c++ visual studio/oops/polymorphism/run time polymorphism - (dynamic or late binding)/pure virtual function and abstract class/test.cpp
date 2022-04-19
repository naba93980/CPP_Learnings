#include <iostream>

using namespace std;

class Base
{

public:
    virtual void show() = 0;
};

class Derived : public Base
{

public:
    void show() { cout << "In Derived \n"; }
};

int main(void)
{

    Base *bp = new Derived;
    //  Base *bp = new Derived(); same as above

    bp->show();

    return 0;
}