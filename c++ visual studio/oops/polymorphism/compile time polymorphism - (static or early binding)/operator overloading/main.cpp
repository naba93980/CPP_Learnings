#include <iostream>
using namespace std;
class Test
{
private:
    int num;

public:
    Test() : num(8) {}
    void operator++()
    {
        num = num + 2;
    }
    void Print()
    {
        cout << "The Count is: " << num;
    }
    void operator+(Test)
    {
    }
};
int main()
{
    Test tt;
    Test h;
    int g = 10;
    ++tt; // calling of a function "void operator ++()"
    tt + h;
    tt.Print();
    return 0;
}