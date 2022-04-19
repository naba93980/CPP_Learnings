//If both base and derived classes are caught as exceptions then catch block of derived class must appear before the base class.If we put base class first then the derived class catch block will never be reached

#include <iostream>
using namespace std;
class a
{
public:
    int x;
};
class b : public a
{
public:
    int y;
};

int main()
{

    b obj;
    try
    {
        throw obj;
    }
    catch (a obj)
    {
        cout << "caught base\n";
    }
    catch (b obj) //derived class object parameterized catch should be above.
    {
        cout << "caught derived\n";
    }
    return 0;
}