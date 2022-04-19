#include <iostream>
class h
{
protected:
    int x = 99;

public:
    // x = 5; //it is redeclaration attempt not accessing the 'x' in private.
    h()
    {
        x = 789; //overrides the earlier decalared value 99; 99 would have stayed if we wouldnot have set x=789;
    }
    void display()
    {
        std::cout << x;
    }
};

int main()
{

    h he;
    he.display();
    std::cout << '\n';
    return 0;
}