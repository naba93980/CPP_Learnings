#include <iostream>
using namespace std;

void test(int var)
{
    cout << "Integer number: " << var << endl;
}

void test(float var)
{
    cout << "Float number: " << var << endl;
}

int main()
{
    // int a = 5;
    // float b = 5.5;
    int c;
    float d;
    cout << "enter  the val of c: ";
    cin >> c;
    if (c > 10)
    {
        d = float(c);
        test(d);
    }
    else
    {
        test(c);
    }
    return 0;
}
