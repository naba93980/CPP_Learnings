#include <iostream>
using namespace std;
class A
{
    int time;
    int principle;
    float interest_rate;
    int amount;

public:
    A() {}
    A(int t, int p, int r)
    {
        time = t;
        principle = p;
        interest_rate = (float)r / 100;
        amount = principle;
        for (size_t i = 0; i < t; i++)
        {
            amount = amount * (1 + interest_rate);
        }
    }
    A(int t, int p, float r)
    {
        time = t;
        principle = p;
        interest_rate = r;
        amount = principle;
        for (size_t i = 0; i < t; i++)
        {
            amount = amount * (1 + interest_rate);
        }
    }

    void display()
    {
        cout << amount << "\n";
    }
};
int main()
{

    A c = A(); //OR A c;
    A a = A(1, 1000, 4);
    A b = A(1, 1000, 0.04f); //floating point number by default is double. so compiler will throw error if it doesnot find any constructor with argument double. so we will have to convert it to float.
    // int time, principle;
    // float rate;
    // int raate;
    // cout << "Enter the value of t, p, r\n";
    // cin >> time >> principle >> rate;
    // A a = A(time, principle, rate);
    a.display();
    // cout << "Enter the value of t, p, r\n";
    // cin >> time >> principle >> raate;
    // A b = A(time, principle, raate);
    b.display();
    c.display();

    return 0;
}