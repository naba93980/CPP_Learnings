#include <iostream> // a default constructor is always called to initialize data memebers at the beggining when the object is created, even if their exists separate memeber functions to initialize data memebers. these separate memebr functions are called after calling the constructor.
class S
{
    //int g;

public:
    int x;
    S()
    {
        // g = 90;
        std::cout << "called  " << x << "\n"; //<< g; //<< "  " << x << "\n";
    }
    void set(int h)
    {
        std::cout << "fun called\n";
        x = h;
    }
    void dis()
    {
        std::cout << x;
    }
};

int main()
{
    S obj;
    obj.set(7);
    obj.dis();
    std::cout << '\n';
    return 0;
}